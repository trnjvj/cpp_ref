#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x = -2.05, y = NAN, result;

    result = fmax(x, y);
    cout << "fmax(x, y) = " << result << endl;

    return 0;
}
