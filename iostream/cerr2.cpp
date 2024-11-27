#include <iostream>
#include <fstream>
using namespace std;

int main() {
  string file_name = "data.txt";
  ifstream my_file(file_name);
	
  if(my_file) {
    cout << my_file.rdbuf();
  }
  else {
    // print error message
    cerr << "Error while opening the file " << file_name;
	
  }

  return 0;
}
