// Inherit_Sample.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class A
{
public:
	virtual void Hellow()
	{
		cout << "Hellow A" << endl;
	}
};

class B : public A
{
public:
	virtual void Hellow()
	{
		cout << "Hellow B" << endl;
	}
};

int main()
{
	B b;
	A a1;
	A& aa = a1;
	A& ab = b;
	aa.Hellow();
	ab.Hellow();
	a1 = ab;
	a1.Hellow();

    return 0;
}

