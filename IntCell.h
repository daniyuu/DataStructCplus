#ifndef IntCell_H
#define IntCell_H
// ��ֹ���ظ�����
#pragma once

class IntCell
{
public:
	IntCell();
	// ���еĵ������Ĺ��캯����������explicit�ģ��Ա����̨������ת��
	// ���������캯����������������ʽ��ʱ����

	// Ĭ�ϲ������ڽӿ��б����壬��ʵ���б�����
	explicit IntCell(int initialValue = 0);

	IntCell(const IntCell & rhs);

	// c++��ÿ����Ա�����������Ϊ���ʺ��������޸ĺ���
	// ���еĳ�Ա���������޸ĺ�����Ҫʹ�ó�Ա������Ϊ���ʺ��������ڲ��������б��β��Բ���ź���Ϲؼ���const
	int read() const;
	void write(int x);
	~IntCell();
	const IntCell & operator=(const IntCell & rhs);

private:
	int *storedValue;
};

#endif