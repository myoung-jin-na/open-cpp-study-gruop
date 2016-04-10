// sample_for.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	std::vector<int> v{1,2,3,4,5};


	for (int i = 0; i < 10; i++)
	{
		cout << i << endl;
		cout << "v size:" << v.size() << endl;
		for (std::vector<int>::iterator iter = v.begin(); iter != v.end(); iter++)
		{
			cout << *iter << ", ";
			if (i == *iter)
			{
				v.erase(iter);
				break;
			}			
		}
	}

    return 0;
}

