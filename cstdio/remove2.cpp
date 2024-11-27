#include <iostream>
#include <cstdio>

using namespace std;

int main() {
  char filename[] = "C:\\Users\\file.txt";
	
  // deletes the file if it exists
  int result = remove(filename);


  // check if file has been deleted successfully
  if (result != 0) {
    // print error message
    cerr << "File deletion failed";
  }
  else {
    cout << "File deleted successfully";
  }
	
  return 0;
}
