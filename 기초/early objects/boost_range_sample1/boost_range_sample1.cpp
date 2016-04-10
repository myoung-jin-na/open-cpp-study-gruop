// boost_range_sample1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <boost/range/adaptor/adjacent_filtered.hpp>
#include <boost/range/algorithm/copy.hpp>
#include <boost/assign.hpp>
#include <functional>
#include <iostream>
#include <vector>

int main()
{
	using namespace boost::assign;
	using namespace boost::adaptors;

	std::vector<int> input;
	input += 1, 1, 2, 2, 2, 3, 4, 5, 6;

	auto v = input | adjacent_filtered(std::not_equal_to<int>());
	boost::copy(v, std::ostream_iterator<int>(std::cout, ","));
	std::cout << std::endl;

    return 0;
}

