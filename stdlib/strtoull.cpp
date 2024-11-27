#include <iostream>
#include <cstdlib>
#include <cstring>
 
using namespace std;
 
int main()
{
 	int base = 10;
 	char numberString[] = "231ax12";
 	char *end;
 	unsigned long long int number;
 	
 	number = strtoull(numberString, &end, base);
 	cout << "String value = " << numberString << endl;
 	cout << "Unsigned Long long int value = " << number << endl;
 	cout << "End String = " << end << endl;
 	
 	strcpy(numberString, "231");
 	cout << "String value = " << numberString << endl;
 	number = strtoull(numberString, &end, base);
 	cout << "Unsigned Long long int value = " << number << endl;
 	if (*end) {
      	cout << end;
 	} else {
      	cout << "Null pointer";
 	}
 	return 0;
}
