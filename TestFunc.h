#pragma once
#include <string>
#include <vector>
using namespace std;

class TestFunc
{
public:
	TestFunc();
	~TestFunc();
	template <typename Comparable>
	const Comparable & findMax(const vector<Comparable> & arr);
};

