#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    cout << "25.5" << " to Double = " << atof("  25.5") << endl;
    cout << "25.5    " << " to Double = " << atof("  25.5   ") << endl;
    cout << "25.5abcd" << " to Double = " << atof("25.5abcd") << endl;

    // Returns 0 because of invalid conversion
    cout << "abcd25.5" << " to Double = " << atof("abcd25.5") << endl;

    // Rules for whitespace and trailing character also apply for infinity and Nan
    cout << "INFINITYabcd" << " to Double = " << atof("INFINITYabcd") << endl;
    cout << "INFINITY" << " to Double = " << atof("  INFINITY") << endl;
    cout << "Nanlll" << " to Double = " << atof("Nanlll") << endl;

    return 0;
}
