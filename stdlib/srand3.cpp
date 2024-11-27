#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {

  // set seed to time(0)
  srand(time(0));


  // generate random number
  int random = rand();

  // print seed and random number
  cout << "Seed = " << time(0) << endl;
  cout << "Random number = " << random;

  return 0;
}
