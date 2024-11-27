#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	cout << "INFINITY" << " to Double = " << atof("INFINITY") << endl;
	cout << "Inf" << " to Double = " << atof("Inf") << endl;

	cout << "Nan" << " to Double = " << atof("Nan") << endl;
	cout << "NAN" << " to Double = " << atof("NAN") << endl;
	
	return 0;
}
