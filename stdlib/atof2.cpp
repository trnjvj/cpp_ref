#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{

	cout << "-44.01e-3" << " to Double = " << atof("-44.01e-0") << endl;
	cout << "-44.01e-3" << " to Double = " << atof("-44.01e-3") << endl;
	
	cout << "0xf1bc" << " to Double = " << atof("0xf1bc") << endl;
	cout << "0xf1bc.51" << " to Double = " << atof("0xf1bc.51") << endl;
	
	return 0;
}
