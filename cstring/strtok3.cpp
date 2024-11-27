#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char str[] = "Remember me when you look at the moon!";
  char delim[] = " ";

  cout << "The tokens are:" << endl;

  // tokenize str in accordance with delim
  char *token = strtok(str,delim);

  // loop until strtok() returns NULL
  while (token)  {

    // print token
   cout << token << endl;
   
    // take subsequent tokens
    token = strtok(NULL,delim);
  }

  return 0;
}
