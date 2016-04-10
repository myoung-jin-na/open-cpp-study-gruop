// adl_sample.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

/*
*  ADL(argument-dependent lookup) : 
*/

namespace MY {
	class A
	{
	private:
		std::string name_;
		int age_;

	public:
		A(std::string name, int age) : name_{ name }, age_{ age }
		{
		};
		A() {};
		~A() {};
		// ADL 추가 방법 1 : 멤버함수를 이용하는 방법 (친구추가 해줘야 해요.)
		friend std::ostream& operator << (std::ostream& mcout, const A& rhs)
		{
			mcout << "name: " << rhs.name_ << " age:" << rhs.age_;
			return mcout;
		}
	};
	// ADL 추가 방법 2 : 전역함수를 이용하는 방법
	std::ostream& operator << (std::ostream& mcout, const A& rhs)
	{
		return mcout;
	}
}
MY::A test()
{
	return MY::A{ "나가수",32 };
}

int main()
{
	// test1
	MY::A a{"나가수",32};
	cout << a << endl;
	// test2
	cout << test() << endl;
	cout << "Hellow ADL" << endl;
    return 0;
}

