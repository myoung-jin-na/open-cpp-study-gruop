// index_sequence_ex.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <tuple>
#include <utility>
#include <string>

template<typename Fn, typename... Args, std::size_t... Index>
auto call_impl(Fn&& fn, std::tuple<Args...> const& args, std::index_sequence<Index...>)
{
	return fn(std::get<Index>(args)...);
}

template<typename Fn, typename... Args>
auto call(Fn&& fn, std::tuple<Args...> const& args) {
	return call_impl(fn, args, std::make_index_sequence<sizeof...(Args)>{});
}

int main()
{
	call(
		[](int a, int b, std::string str) {
			std::cout << a << "," << b << str << std::endl;
		},
		std::make_tuple(1, 2, "ssss")
		);
    return 0;
}

