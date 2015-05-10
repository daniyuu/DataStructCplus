#include "IntCell.h"

/**
* Construct the IntCell
* Initial value is initialValue
*/
// Ĭ�ϲ���
// ��ʼ���б�

IntCell::IntCell(int initialValue){
	storedValue = new int(initialValue);
}

IntCell::IntCell(const IntCell & rhs){
	storedValue = new int(*rhs.storedValue);
}

//  ::�����������
int IntCell::read() const{
	return *storedValue;
}

void IntCell::write(int x){
	*storedValue = x;
}

IntCell::~IntCell()
{
	delete storedValue;
}

const IntCell & IntCell::operator=(const IntCell & rhs){
	if (this != &rhs)
		*storedValue = *rhs.storedValue;
	return *this;
}
