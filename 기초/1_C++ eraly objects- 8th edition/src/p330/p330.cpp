// p330.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> v1 = {10,20,30,40,50,60,70,30,40,50};
	vector<int> v2 = {30,40,50};

	auto iter = search(v1.begin(), v1.end(), v2.begin(), v2.end());
	if (iter != v1.end()) 
	{
		cout << "iter : " << *iter << endl;
		cout << "iter-1: " << *(iter - 1) << endl;
		cout << "iter+1: " << *(iter + 1) << endl;
	}

    return 0;
}

