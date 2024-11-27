#include <iostream>
using namespace std;

int main() {
  char name[20], address[20];

  cout << "Name: ";

  // use cin with getline()
  cin.getline(name, 20);

	
  cout << "Address: ";

  cin.getline(address, 20);



  cout << endl << "You entered " << endl;
  cout << "Name = " << name << endl;
  cout << "Address = " << address;
	
  return 0;
}
