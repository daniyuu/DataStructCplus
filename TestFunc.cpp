#include "TestFunc.h"
#include <string>
using namespace std;

TestFunc::TestFunc()
{
}


TestFunc::~TestFunc()
{
}

const string & TestFunc::findMax(const vector<string> & arr){

	int maxIndex = 0;
	for (int i = 1; i < arr.size(); ++i){
		if (arr[maxIndex] < arr[i]){
			maxIndex = i;
		}
	}
	return arr[maxIndex];
}
