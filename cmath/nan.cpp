#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{
    double src = nan("1");
    uint64_t dest;
    
    // copies variable src to dest
    // use <cstring> for memcpy()
    memcpy(&dest, &src, sizeof src);
    cout << "nan(\"1\") = " << src << " (" << hex << dest << ")\n";

    return 0;
}
