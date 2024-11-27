#include <iostream>
#include <cstdlib>
using namespace std;
 
int main()
{
 	char *end;
 	
 	cout << "  25axbz" << " to Unsigned Long Long Int with base-11 = " << strtoull("  25axbz", &end, 11) << endl;
 	cout << "End String = " << end << endl << endl;
 	
 	/* Negative value is converted to unsigned long long int type */
 	cout << "   -110bcd" << " to Unsigned Long Long Int with base-2 = " << strtoull("   -110bcd", &end, 2) << endl;
 	cout << "End String = " << end << endl << endl;
 
 	cout << "ax110.97" << " to Unsigned Long Long Int with base-10 = " << strtoull("ax110.97", &end, 10) << endl;
 	cout << "End String = " << end << endl << endl;
 
 	return 0;
}
