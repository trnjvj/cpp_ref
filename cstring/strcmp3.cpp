#include <cstring>
#include <iostream>
using namespace std;

// function to display the result of strcmp()
void display(char *lhs, char *rhs) {

  // compare display() parameters lhs and rhs   
  int result = strcmp(lhs, rhs);


  if (result > 0)
    cout << rhs << " precedes " << lhs << endl;
  else if (result < 0)
    cout << rhs << " follows " << lhs << endl;
  else
    cout << lhs << " and " << rhs << " are same" << endl;
}

int main() {
  char str1[] = "Armstrong";
  char str2[] = "Army";

  // lhs = str1, rhs = str2
  display(str1, str2);

  // lhs = str2, rhs = str1
  display(str2, str1);

  // lhs = str1, rhs = str1
  display(str1, str1);

  // lhs = str2, rhs = str2
  display(str2, str2);

  return 0;
}
