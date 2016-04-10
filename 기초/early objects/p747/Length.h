#pragma once

using fn = int(*)(int, int);

template <typename R, typename T>
using fn = R(*)(T, T);

class Length
{
private:
	int len_inches;
public:
	Length(int feet, int inches);
	Length(int inches) { len_inches = inches; };
	~Length();

	operator double() const;
	operator int() const;
	operator fn() {
		return [](int a, int b) { return a + b; };
	};
};

