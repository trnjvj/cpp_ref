#include <cstring>
#include <iostream>

using namespace std;

int main() {
  char src[20] = "I am the source.";

  // large enough to store content of src
  char dest[30] = "I am the destination.";
    
  cout << "dest[] before copy: " << dest << endl;

  // copy contents of src to dest    
  strcpy(dest,src);


  cout << "dest[] after copy: " << dest;

  return 0;
}
