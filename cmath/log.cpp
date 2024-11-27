#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	double x = 13.056, result;
	result = log (x);
	cout << "log(x) = " << result << endl;
	
	x = -3.591;
	result = log (x);
	cout << "log(x) = " << result << endl;
	
	return 0;
}
