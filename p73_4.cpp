#include <iostream>

using namespace std;

class area_cl{
public:
	double height;
	double width;
};

class rectangle:public area_cl{
public:
	rectangle(double height, double width);
	double area();
};

class isosceles:public area_cl{
public:
	isosceles(double h, double w);
	double area();
};

class cylinder:public area_cl{
public:
	cylinder(double h, double w);
	double area();
}

rectangle::rectangle(double h, double w)
{
	height = h;
	width = w;
}

double rectangle::area()
{
	return height * width;
}

isosceles::isosceles(double h, double w)
{
	height = h;
	width = w;
}

double isosceles::area()
{
	return (height*width)/2.0;
}

cylinder::cylinder(double h, double w)
{
	height = h;
	width = w;
}

double cylinder::area()
{
	return (2.0*3.14*
}

int main()
{
	rectangle rec(2.0, 4.0);
	isosceles iso(2.0, 7.0);
	
	cout <<rec.area() <<"\n";
	cout <<iso.area() <<"\n";
	return 0;
}