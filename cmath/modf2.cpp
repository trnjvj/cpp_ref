#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	int x = 5;
	double intpart, fractpart;
	fractpart = modf(x, &intpart);
	cout << x << " = " << intpart << " + " << fractpart << endl;
	
	return 0;
}
