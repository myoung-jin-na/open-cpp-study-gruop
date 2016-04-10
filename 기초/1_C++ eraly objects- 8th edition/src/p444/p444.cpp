// p444.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <type_traits>
#include <string>

using namespace std;

class Rectangle {
private:
	double length;
	double width;
public:
	void setLength(double len){
		length = len;
	}
	void setWidth(double wid){
		width = wid;
	}
	double getLength(){
		return length;
	}
	double getWidth(){
		return width;
	}
	double getArea(){
		return length * width;
	}
};

class Carpet{
private:
	double pricePerSqYd;
	Rectangle size;

public:
	void setPricePerYd(double p){
		pricePerSqYd = p;
	}
	void setDimensions(double len, double wid){
		size.setLength(len / 3);
		size.setWidth(wid / 3);
	}
	double getTotalPrice(){
		return (size.getArea()*pricePerSqYd);
	}
};

int main()
{
	cout << "is_trivial: " << std::is_trivial<Rectangle>::value << endl;

	Carpet purchase;
	double pricePerYd;
	double length;
	double width;

	cout << "Room length in feet: ";
	cin >> length;
	cout << "Room width in feet: ";
	cin >> width;
	cout << "Carpet price per sq. yard: ";
	cin >> pricePerYd;
	purchase.setDimensions(length, width);
	purchase.setPricePerYd(pricePerYd);

	cout << "\nThe total price of my new " << length << " x " << width
		<< " carpet is $" << purchase.getTotalPrice() << endl;

    return 0;
}

