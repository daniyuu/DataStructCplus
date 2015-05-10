#pragma once
#include <string>
#include <vector>
using namespace std;

class TestFunc
{
public:
	TestFunc();
	~TestFunc();
	const string & findMax(const vector<string> & arr);
};

