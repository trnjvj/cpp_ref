#include <cctype>
#include <iostream>
#include <cstring>
using namespace std;

int main() {
  char str[] = "John is from USA.";
  char ch;

  cout << "The lowercase version of \"" << str << "\" is " << endl;

  for (int i = 0; i < strlen(str); i++) {

    // convert str[i] to lowercase
    ch = tolower(str[i]);


    cout << ch;
  }

  return 0;
}
