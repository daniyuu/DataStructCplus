#pragma once
class IntCell
{
public:
	IntCell();
	// 所有的单参数的构造函数都必须是explicit的，以避免后台的类型转换
	//单参数构造函数不能用来创建隐式临时对象
	explicit IntCell(int initialValue);

	// c++中每个成员函数都被标记为访问函数或者修改函数
	// 所有的成员函数都是修改函数，要使得成员函数称为访问函数必须在参数类型列表结尾的圆括号后加上关键字const
	int read() const;
	void write(int x);
	~IntCell();

private:
	int storedValue;
};

