#include "IntCell.h"

/**
* Construct the IntCell
* Initial value is initialValue
*/
// Ĭ�ϲ���
// ��ʼ���б�
IntCell::IntCell(int initialValue = 0) :
storedValue(initialValue){}

int IntCell::read() const{
	return storedValue;
}

void IntCell::write(int x){
	storedValue = x;
}

IntCell::~IntCell()
{
}
