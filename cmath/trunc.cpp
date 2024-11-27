#include <iostream>
#include <cmath>
 
using namespace std;
 
int main()
{
    double x = 10.25, result;
    result = trunc(x);
    cout << "trunc(" << x << ") = " << result << endl;
 
    x = -34.251;
    result = trunc(x);
    cout << "trunc(" << x << ") = " << result << endl;
 
    return 0;
}
