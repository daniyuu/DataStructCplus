#ifndef IntCell_H
#define IntCell_H
// 防止被重复定义
#pragma once

class IntCell
{
public:
	IntCell();
	// 所有的单参数的构造函数都必须是explicit的，以避免后台的类型转换
	// 单参数构造函数不能用来创建隐式临时对象

	// 默认参数仅在接口中被定义，在实现中被忽略
	explicit IntCell(int initialValue = 0);

	IntCell(const IntCell & rhs);

	// c++中每个成员函数都被标记为访问函数或者修改函数
	// 所有的成员函数都是修改函数，要使得成员函数称为访问函数必须在参数类型列表结尾的圆括号后加上关键字const
	int read() const;
	void write(int x);
	~IntCell();
	const IntCell & operator=(const IntCell & rhs);

private:
	int *storedValue;
};

#endif