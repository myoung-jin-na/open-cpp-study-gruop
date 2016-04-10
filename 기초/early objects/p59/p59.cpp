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

	int a[sizeof(int)]; // << 컴파일 타임에 결정 된다.

	cout << __LINE__ << endl;
	cout << __func__ << endl;

	cout << endl;
	cout << endl;
	cout << endl;

	int b;

	//cout << b << endl;
	printf("%d", b);

	std::string* ptr; // zero-initializeation
	std::string m1; // default-initialization,  생성자가 존재하지 않는다면 zero-init으로 된다. 습관적으로 empty-init사용하라
	
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

