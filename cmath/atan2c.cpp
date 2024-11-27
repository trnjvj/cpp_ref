#include <iostream>
#include <cmath>
#define PI 3.141592654
using namespace std;

int main() {
  double result;
  float x = -31.6;
  int y = 3;
  
  // atan2() with float and int arguments
  result = atan2(y, x);

  
  cout << "atan2(y/x) = " << result << " radians" << endl;
  
  // Display result in degrees
  cout << "atan2(y/x) = " << result * (180 / PI) << " degrees";

  return 0;
}
