#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    char str[] = "Programming is easy.";
    char ch = 'r';
    
    if (strchr(str, ch))
        cout << ch << " is present \"" << str << "\"";
    else
        cout << ch << " is not present \"" << str << "\"";

    return 0;
}
