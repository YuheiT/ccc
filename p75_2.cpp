#include <iostream>
using namespace std;

class FeetToInch{
	double inch, feet;
public:
	FeetToInch(double f);
};

FeetToInch::FeetToInch(double f)
{
	feet = f;
	inch = feet/12.0;
	
	if(inch == 0)cout << "error\n";
	cout << inch << "\n";
}

int main()
{
	FeetToInch ob(18);
	
	return 0;
}