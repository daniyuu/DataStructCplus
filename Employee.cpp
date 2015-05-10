#include "Employee.h"
#include <string>
using namespace std;

Employee::Employee()
{
}


Employee::~Employee()
{
}

void Employee::setValue(const string & n, double s){
	name = n;
	salary = s;
}

const string & Employee::getName() const{
	return name;
}

void Employee::print(ostream & out) const{
	out << name << " (" << salary << " )";
}

bool Employee::operator<(const Employee & rhs) const{
	return salary < rhs.salary;
}