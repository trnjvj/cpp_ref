#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int x = 5;
	int *ptr1 = NULL;

	/* allocatingmemory without using calloc, malloc or realloc*/
	int *ptr2 = &x;
	if(ptr1)
	{
		cout << "Pointer is not Null" << endl;
	}
	else
	{
		cout << "Pointer is Null" << endl;
	}

	/* Does nothing */
	free(ptr1);
	cout << *ptr2;

	/* gives a runtime error if free(ptr2) is executed*/
	// free(ptr2);

	return 0;
}
