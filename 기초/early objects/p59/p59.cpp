// p59.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	long double apple;

	cout << "The size of an integer is " << sizeof(int);
	cout << " bytes.\n";
	cout << "The size of a long integer is " << sizeof(long);
	cout << " bytes.\n";
	cout << "An apple cna be eaten in " << sizeof(apple);
	cout << " bytes!\n";

	int a[sizeof(int)]; // << ������ Ÿ�ӿ� ���� �ȴ�.

	cout << __LINE__ << endl;
	cout << __func__ << endl;

	cout << endl;
	cout << endl;
	cout << endl;

	int b;

	//cout << b << endl;
	printf("%d", b);

	std::string* ptr; // zero-initializeation
	std::string m1; // default-initialization,  �����ڰ� �������� �ʴ´ٸ� zero-init���� �ȴ�. ���������� empty-init����϶�
	
	// value-initialization(empty-initialization)
	std::string m2(); 
	std::string m3{};

	// direct-initialization
	std::string m4("hellow");
	std::string m5{ "hellow" };
	std::string m6(m4);

	// copy-initialization
	std::string m7 = m4;
	std::string m8 = { m4 };

	// reference-initialization
	std::string& m9 = m8;

	return 0;
}

