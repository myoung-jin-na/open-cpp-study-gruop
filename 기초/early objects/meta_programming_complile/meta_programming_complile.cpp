// meta_programming_complile.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

template<class.. R>
struct last_element;

template<class T>
struct last_element<T>
{
	using type = T;
};

template<class T, class... R>
struct last_element<T, R...>
{
	using type = typename last_element<R...>::type;
};

int main()
{
	last_element<int, bool, char>::type i = 'c';
    return 0;
}

