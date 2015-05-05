#pragma once
class IntCell
{
public:
	IntCell();
	// ���еĵ������Ĺ��캯����������explicit�ģ��Ա����̨������ת��
	//���������캯����������������ʽ��ʱ����
	explicit IntCell(int initialValue);

	// c++��ÿ����Ա�����������Ϊ���ʺ��������޸ĺ���
	// ���еĳ�Ա���������޸ĺ�����Ҫʹ�ó�Ա������Ϊ���ʺ��������ڲ��������б��β��Բ���ź���Ϲؼ���const
	int read() const;
	void write(int x);
	~IntCell();

private:
	int storedValue;
};

