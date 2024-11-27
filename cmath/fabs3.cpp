#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int num = -23;
  double result;

  result = fabs(num);


  cout << "fabs(" << num << ") = |" << num << "| = " << result;

  return 0;
}
