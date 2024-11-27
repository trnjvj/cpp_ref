#include <iostream>
#include <cmath>
using namespace std;

int main () {
  double base, exponent, result;
	
  base = 3.4;
  exponent = 4.4;

  result = pow(base, exponent);

	
  cout << base << " ^ " << exponent << " = " << result;
	
  return 0;
}
