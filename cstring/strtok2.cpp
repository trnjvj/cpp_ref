#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char quote[] = "Remember me when you look at the moon!";

  // break the string when it encounters empty space
  // str = quote, delim = " "
  char* word = strtok(quote, " ");


  cout << "token1 = " << word << endl;

  // get the next token i.e. word before second empty space
  // NULL indicates we are using the same pointer we used previously i.e. quote
  word = strtok(NULL, " ");


  cout << "token2 = " << word;

  // get the third token
  word = strtok(NULL, " ");


  cout << "token3 = " << word;

  return 0;
}
