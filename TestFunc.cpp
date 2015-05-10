#include "TestFunc.h"
#include <string>
using namespace std;

TestFunc::TestFunc()
{
}


TestFunc::~TestFunc()
{
}

/**
* Return the maximum item in array a
* Assumes a.size()>0
* Comparable objects must provide operator< and operator=
*/
template <typename Comparable>
const Comparable & TestFunc::findMax(const vector<Comparable> & arr){

	int maxIndex = 0;
	for (int i = 1; i < arr.size(); ++i){
		if (arr[maxIndex] < arr[i]){
			maxIndex = i;
		}
	}
	return arr[maxIndex];
}
