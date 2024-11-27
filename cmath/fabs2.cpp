#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double num = -10.25, result;
    
  result = fabs(num);


  cout << "fabs(" << num << ") = |" << num << "| = " << result;

  return 0;
}
