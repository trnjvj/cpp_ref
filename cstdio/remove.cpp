#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  char filename[] = "program.cpp";

  // remove the file "program.cpp"
  int result = remove(filename);


  cout << result;

  return 0;
}

// Output: -1
