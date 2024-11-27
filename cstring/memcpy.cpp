#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char source[] = "Tutorial";
  char destination[] = "Programiz";

  // copy all bytes of source to destination
  memcpy(destination, source, sizeof(source));


  cout << destination;

  return 0;
}

// Output: Tutorial
