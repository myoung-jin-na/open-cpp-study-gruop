// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

template<typename T, std::size_t N>
auto sum(T(&a)[N]) {
	T sum{};
	for (auto&& item : a) {
		sum += item;
	}
	return sum;
}

int product() { return 1; }
template<typename T, typename...Args>
int product(T a, Args... args) {
	return a * product(args...);
}

struct S {
private:
	int i;
public:
	void putprop(int j) {
		std::cout << "ddff" << std::endl;
		i = j;
	}
	int getprop() {
		return i;
	}

	__declspec(property(get = getprop, put = putprop)) int the_prop;
};


int main()
{
	S s;
	s.the_prop = 100;

	//int a[] = { 1,2,3,4,5 };
	//bool ba[] = { false, true, false };

	std::cout << product(1, 2, 3, 4, 5, 6, 7, 8, 9, 10) << std::endl;

    return 0;
}

