#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int main()
{
	char *ptr;
	ptr = (char*) malloc(10*sizeof(char));

	strcpy(ptr,"Hello C++");
	cout << "Before reallocating: " << ptr << endl;

	/* reallocating memory */
	ptr = (char*) realloc(ptr,20);
	strcpy(ptr,"Hello, Welcome to C++");
	cout << "After reallocating: " <<ptr << endl;

	free(ptr);
	/* prints a garbage value after ptr is free */
	cout << endl << "Garbage Value: " << ptr;

	return 0;
}
