#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char str1[] = "Megadeth";
  char str2[] = "Metallica";

  // returns -1 because "Megadeth" < "Metallica" lexicographically
  int result = strcmp(str1, str2);


  cout << "Comparing " << str1 << " and " << str2 << ": " << result << endl;

  // returns 1 because  "Metallica" > "Megadeth" lexicographically
  result = strcmp(str2, str1);


  cout << "Comparing " << str2 << " and " << str1 << ": " << result << endl;

  // returns 1 because  "Megadeth" = "Megadeth" lexicographically
  result = strcmp(str1, str1);


  cout << "Comparing " << str1 << " and " << str1 << ": " << result;

  return 0;
}
