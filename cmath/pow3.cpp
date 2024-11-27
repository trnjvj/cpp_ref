#include <iostream>
#include <cmath>
using namespace std;

int main () {
  long double base = 4.4, result;
  int exponent = -3;

  result = pow(base, exponent);


  cout << base << " ^ " << exponent << " = " << result << endl;
	
  // initialize int arguments
  int int_base = -4, int_exponent = 6;

  double answer;

  // pow() returns double in this case
  answer = pow(int_base, int_exponent);


  cout << int_base << " ^ " << int_exponent << " = " << answer;
	
  return 0;
}
