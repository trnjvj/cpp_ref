#include <cctype>
#include <iostream>
#include <cstring>
using namespace std;

int main() {
  char str[] = "hj;pq910js4";
  int check;

  cout << "The digit in the string are:" << endl;

  for (int i = 0; i < strlen(str); i++)  {

    // check if str[i] is a digit
    check = isdigit(str[i]);


    if (check)
      cout << str[i] << endl;
  }

  return 0;
}
