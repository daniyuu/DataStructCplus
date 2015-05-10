#pragma once
#include <string>
using namespace std;

class Employee
{
public:
	Employee();
	~Employee();
	void setValue(const string & n, double s);
	const string & getName() const;
	void print(ostream & out) const;
	bool operator< (const Employee & rhs) const;


private:
	string name;
	double salary;
};

