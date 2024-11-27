#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x = 7.5, y = 2.1;
    double result = fmod(x, y);
    cout << "Remainder of " << x << "/" << y << " = " << result << endl;
    
    x = -17.50, y = 2.0;
    result = fmod(x, y);
    cout << "Remainder of " << x << "/" << y << " = " << result << endl;
    
    return 0;
}
