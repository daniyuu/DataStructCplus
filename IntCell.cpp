#include "IntCell.h"

/**
* Construct the IntCell
* Initial value is 0
*/
IntCell::IntCell()
{
	storedValue = 0;
}

/**
* Construct the IntCell
* Initial value is initialValue
*/
IntCell::IntCell(int initialValue){
	storedValue = initialValue;
}

int IntCell::read(){
	return storedValue;
}

void IntCell::write(int x){
	storedValue = x;
}

IntCell::~IntCell()
{
}
