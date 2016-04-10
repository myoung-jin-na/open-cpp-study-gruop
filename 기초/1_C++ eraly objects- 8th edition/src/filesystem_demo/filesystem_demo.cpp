// filesystem_demo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <boost\filesystem.hpp>

int main(int argc, TCHAR* argv[])
{
	namespace fs = boost::filesystem;

	fs::path file("./");
	do {
		if (!fs::exists(file)) {
			std::cout << "file not found.\n";
			break;
		}
		if (!fs::is_directory(file)) break;

		fs::recursive_directory_iterator it(file);
		fs::recursive_directory_iterator fend;

		for (; it != fend; ++it) {
			for (int i = 0; i <= it.level(); ++i) {
				std::cout << "    ";
			}
			std::cout << it->path() << std::endl;
		}
	} while (false);

    return 0;
}

