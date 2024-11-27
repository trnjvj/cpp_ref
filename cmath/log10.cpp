#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	double x = 13.056, result;
	result = log10(x);
	cout << "log10(x) = " << result << endl;
	
	x = -3.591;
	result = log10(x);
	cout << "log10(x) = " << result << endl;
	
	return 0;
}
