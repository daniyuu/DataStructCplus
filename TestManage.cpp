#include "TestManage.h"
#include "IntCell.h"

TestManage::TestManage()
{
}


TestManage::~TestManage()
{
}

void TestManage::testIntCell(){
	IntCell obj = IntCell(0);
	//obj = 37;
	IntCell temp = IntCell(37);
	obj = temp;
}