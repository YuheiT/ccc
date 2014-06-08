#include <iostream>
#include <cstdlib>

using namespace std;

class dice{
	int r;
public:
	void roll();
};

void dice::roll()
{
	r = rand()%6 + 1;
	cout << r << "\n";
}

int main()
{
	dice one;
	
	for(int i=0; i<100; i++)
		one.roll();
	return 0;
}