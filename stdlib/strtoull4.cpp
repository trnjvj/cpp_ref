#include <iostream>
#include <cstdlib>
using namespace std;
 
int main()
{
 	char *end;
 	
 	/* octal base */
 	cout << "017x" << " to Unsigned Long Long Int with base-0 = " << strtoull("017x", &end, 0) << endl;
 	cout << "End String = " << end << endl << endl;
 	
 	/* hexadecimal base */
 	cout << "0x1cg" << " to Unsigned Long Long Int with base-0 = " << strtoull("0x1cg", &end, 0) << endl;
 	cout << "End String = " << end << endl << endl;
 	
 	/* decimal base */
 	cout << "70sxz" << " to Unsigned Long Long Int with base-0 = " << strtoull("70sxz", &end, 0) << endl;
 	cout << "End String = " << end << endl << endl;
 	
 	return 0;
}
