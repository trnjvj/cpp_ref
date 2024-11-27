#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char source[] = "Tutorial";
  char destination[] = "Programiz";

  cout << "Initial destination: " << destination << endl;

  // copy all bytes of destination to source
  memcpy(destination, source, sizeof(source));


  cout << "Final destination: " << destination;

  return 0;
}
