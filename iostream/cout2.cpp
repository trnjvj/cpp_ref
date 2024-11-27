#include <iostream>
using namespace std;

int main() {
  int a,b;
  string str = "Hello Programmers";
	
  // single insertion operator
  cout << "Enter 2 numbers - ";


  cin >> a >> b;

  cout << str;
  cout << endl;
	
  // multiple insertion operators
  cout << "Value of a is " << a << endl << "Value of b is " << b;


  return 0;
}
