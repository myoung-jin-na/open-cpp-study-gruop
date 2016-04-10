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
	namespace { // �͸��� namespace, private �� �ǹ���.
				// �ٸ� ���Ͽ����� ���� �� �� ����.
	}

	namespace A {
		class T {

		};
	}
	// �˻��ܰ�� �Ѵܰ� ������������ ���� �ȴ�.
	void test(A::T&) {  // a is parameter

	}
}
*/

int main()
{
	B::A::T b; // qualified lookup
	test(b); // unqualified lookup  ----> failed
	        // function is --> function argument-dependent lookup
			// {A::T Ŭ���� ����, namespace A};
			// {B::A::T Ŭ���� ����, namespace B::A};  �˻��ܰ�� �Ѵܰ� ������������ ���� �ȴ�.


	int apples;

	apples = 20; // 20, "On Sunday" are literals
	cout << "On Sunday ew sold " << apples << " bushels of apples. \n";

	apples = 15;
	cout << "On Monday we sold " << apples << " bushels of apples. \n";

    return 0;
}
