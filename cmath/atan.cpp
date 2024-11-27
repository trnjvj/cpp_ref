#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  double x = 57.74, result;
  result = atan(x);
  
  cout << "atan(x) = " << result << " radians" << endl;
  
  // Output in degrees
  cout << "atan(x) = " << result*180/3.1415 << " degrees" << endl;
  
  return 0;
}
