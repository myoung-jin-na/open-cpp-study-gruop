// p111.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <functional>
#include <iomanip>
#include <string>
using namespace std;

// �ڡڡ� ��Ÿ�Ե� ���� �ǵ��� ADL�� �߰��ϱ� ���ؼ��� �Ʒ��� ���� �ڵ� �Ѵ�.
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
//	// std::cout.width(6); setw�� �Լ��� �� ���ϰ� ��� �� �� �ֵ��� ǥ������ Ȯ���� ����.
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
	// �Ϲ� ���ٸ� ��� �� �� ���� Ȯ�强�� ����. (ǥ������ ���� ��ų �� ����.)
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

