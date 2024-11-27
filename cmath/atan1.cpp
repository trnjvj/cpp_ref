#include <iostream>
#include <cmath>
#define PI 3.141592654

using namespace std;

int main()
{
  int x = 14;
  double result;
  
  result = atan(x);
  
  cout << "atan(x) = " << result << " radians" << endl;
  // Output in degrees
  cout << "atan(x) = " << result*180/3.1415 << " degrees" << endl;
  
  return 0;
}
