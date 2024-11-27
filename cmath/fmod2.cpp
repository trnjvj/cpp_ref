#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x = 12.19, result;
    int y = -3;
    
    result = fmod(x, y);
    cout << "Remainder of " << x << "/" << y << " = " << result << endl;
    
    y = 0;
    result = fmod(x, y);
    cout << "Remainder of " << x << "/" << y << " = " << result << endl;

    return 0;
}
