#include <cstring>
#include <iostream>
using namespace std;

int main() {
  int source[10] = {8,3,11,61,-22,7,-6,2,13,47};
  int destination[5];

  // copy 5 elements (20 bytes) of source to destination
  memcpy(destination, source, sizeof(int) * 5);


  cout << "After copying" << endl;

  for (int i=0; i<5; i++)
    cout << destination[i] << endl;
  return 0;
}
