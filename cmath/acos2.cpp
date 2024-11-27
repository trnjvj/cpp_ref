#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int x = -1;
  double result;

  result = acos(x);
  
  cout << "acos(x) = " << result << " radians" << endl;
  // Converting result to degrees
  cout << "acos(x) = " << result*180/3.1415 << " degrees";
  
  return 0;
}
