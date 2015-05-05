#include "TestManage.h"
#include "IntCell.h"
#include <iostream>
#include <vector>

using namespace std;

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

void TestManage::testVector(){
	vector<int> squares(100);

	for (int i = 0; i < squares.size(); ++i){
		squares[i] = i + 1;
	}

	for (int i = 0; i < squares.size(); ++i){
		cout << i << " " << squares[i] << endl;
	}
}

void TestManage::testZhizhen(){
	IntCell *m;

	m = new IntCell(0);
	// 通过指针访问对象的成员需要通过->操作符进行访问
	m->write(5);
	cout << "Cell contents: " << m->read() << endl;

	delete m;
	return;
}