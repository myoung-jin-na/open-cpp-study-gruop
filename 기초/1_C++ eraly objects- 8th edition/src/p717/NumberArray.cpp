#include "NumberArray.h"
#include <iostream>
using namespace std;


NumberArray::NumberArray(int size, double value)
{
	arraySize = size;
	aPtr = new double[arraySize];
	setValue(value);
}



void NumberArray::print() const
{
	for (int index = 0; index < arraySize; index++)
		cout << aPtr[index] << " ";
}

void NumberArray::setValue(double value)
{
	for (int index = 0; index < arraySize; index++)
		aPtr[index] = value;
}
