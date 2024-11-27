#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

  // allocate memory of size 0
  int *ptr = (int*) malloc(0);


  if (ptr==NULL) {
    cout << "Null pointer";
  }
  else {
    cout << "Address = " << ptr;
  }

  // deallocate memory
  free(ptr);

  return 0;
}
