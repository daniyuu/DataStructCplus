#include "TestManage.h"
#include "IntCell.h"
#include <iostream>
#include <vector>
#include <string>

#include "MemoryCell.h"


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
	// ͨ��ָ����ʶ���ĳ�Ա��Ҫͨ��->���������з���
	m->write(5);
	cout << "Cell contents: " << m->read() << endl;

	delete m;
	return;
}

//��������
// ��ֵ����ʹ�ò����������ĵ�С����
// ���������õ��������ڲ����������ĵĴ����
// ��ַ�������������п��Ա��������ĵĶ���


//void TestManage::testTemplateClass(){
//	MemoryCell<int> m1;
//	MemoryCell<string> m2; ("Hello");
//
//	m1.write(37);
//	m2.write(m2.read() + " world");
//
//	cout << m1.read() << endl;
//	cout << m2.read() << endl;
//
//	return;
//}