#include<iostream>
#include<cstdlib>
using namespace std;

int main() {
  int random = rand();
  
  // srand() has not been called), so seed = 1
  cout << "Seed = 1, Random number = " << random << endl;

  // set seed to 5
  srand(5);


  // generate random number
  random = rand();
  cout << "Seed = 5, Random number = " << random << endl;

  return 0;
}
