// program2_8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


namespace B {
	namespace A {
		class T {

		};

		void test(T&) {  // a is parameter

		}
	}
}


/*
namespace B {
	namespace { // 익명의 namespace, private 의 의미임.
				// 다른 파일에서는 접근 할 수 없음.
	}

	namespace A {
		class T {

		};
	}
	// 검색단계는 한단계 위까지만으로 제한 된다.
	void test(A::T&) {  // a is parameter

	}
}
*/

int main()
{
	B::A::T b; // qualified lookup
	test(b); // unqualified lookup  ----> failed
	        // function is --> function argument-dependent lookup
			// {A::T 클래스 범위, namespace A};
			// {B::A::T 클래스 범위, namespace B::A};  검색단계는 한단계 위까지만으로 제한 된다.


	int apples;

	apples = 20; // 20, "On Sunday" are literals
	cout << "On Sunday ew sold " << apples << " bushels of apples. \n";

	apples = 15;
	cout << "On Monday we sold " << apples << " bushels of apples. \n";

    return 0;
}
