// p111.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <functional>
#include <iomanip>
#include <string>
using namespace std;

// ★★★ 이타입도 지원 되도록 ADL을 추가하기 위해서는 아래와 같이 코딩 한다.
std::ostream& operator<<(std::ostream& mcount, std::function<std::ostream&(std::ostream&)>& fp) {
	fp(mcount);
	return mcount;
}

int main()
{
//	int num1 = 1234;
//	std::cout << std::fixed;
//	std::cout << num1 << std::endl;
//
//	// std::cout.width(6); setw는 함수를 더 편리하게 사용 할 수 있도록 표현력을 확장한 형태.
//	std::cout << std::setw(6);
//	{
//		/*
//		template<class _Elem,
//			class _Traits,
//			class _Arg> inline
//			basic_ostream<_Elem, _Traits>& operator<<(
//			basic_ostream<_Elem, _Traits>& _Ostr, const _Smanip<_Arg>& _Manip)
//			{	// insert by calling function with output stream and argument
//			(*_Manip._Pfun)(_Ostr, _Manip._Manarg);
//			return (_Ostr);
//			}
//		*/
//	}
	// std::ostream& fn(ostream& mcout);
	//std::cout << fn() << endl;
	// 일반 람다를 사용 할 때 보다 확장성이 높다. (표현력을 증가 시킬 수 있음.)
	int jk{ 10 };
	std::function<std::ostream&(std::ostream&)> fn;
	//std::cout << fn;
	fn = [jk](std::ostream& mcout)->std::ostream& {
			mcout << "call" << "    " << jk;
			return mcout;
		};
	std::cout << fn;

//	int intValue = 3928;
//	double doubleValue = 91.5;
//	string stringValue = "Jill Q. Jones";
//
//	cout << "(" << setw(5) << intValue << ")" << endl;
//	cout << "(" << setw(8) << doubleValue << ")" << endl;
//	cout << "(" << setw(16) << stringValue << ")" << endl;

    return 0;
}

