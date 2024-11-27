#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double x = 10.0, y = -10.0;

  double result = atan2(y, x);


  // convert result to degrees
  double degree = result * (180 / 3.141592);

  cout << "atan2(y/x) = " << result << " radians" << endl;
  cout << "atan2(y/x) = " << degree << " degrees";
  
  return 0;
}
