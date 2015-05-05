#include "IntCell.h"

/**
* Construct the IntCell
* Initial value is initialValue
*/
// 默认参数
// 初始化列表
IntCell::IntCell(int initialValue) : storedValue(initialValue){}

//  ::作用于运算符
int IntCell::read() const{
	return storedValue;
}

void IntCell::write(int x){
	storedValue = x;
}

IntCell::~IntCell()
{
}
