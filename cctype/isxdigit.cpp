#include <cctype>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    bool flag = 0;
    char str[] = "50Af";

    for (int i=0; i<strlen(str); i++)
    {
        if (!isxdigit(str[i]))
        {
            flag = 1;
            break;
        }
    }

    if (flag)
        cout << str << " is not a valid hexadecimal number";
    else
        cout << str << " is a valid hexadecimal number";
    
    return 0;
}
