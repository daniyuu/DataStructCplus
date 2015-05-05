#pragma once
class IntCell
{
public:
	IntCell();
	IntCell(int initialValue);
	int read();
	void write();
	~IntCell();

private:
	int storedValue;
};

