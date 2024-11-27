#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char source[] = "Tutorial";
  char destination[] = "Programiz";

  cout << "Initial destination: " << destination << endl;

  // copy 4 bytes of destination to source
  memcpy(destination, source, 4);


  cout << "Final destination: " << destination;

  return 0;
}
