#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double num, result;

  num = 10.25;
  result = floor(num);

  
  cout << "Floor of " << num << " = " << result << endl;

  num = -34.251;
  result = floor(num);


  cout << "Floor of " << num << " = " << result << endl;
    
  num = 0.71;
  result = floor(num);


  cout << "Floor of " << num << " = " << result;
    
  return 0;
}
