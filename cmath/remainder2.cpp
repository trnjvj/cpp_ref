#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x = 5;
    double y = 2.13, result;
    
    result = remainder(x, y);
    cout << "Remainder of " << x << "/" << y << " = " << result << endl;

    return 0;
}
