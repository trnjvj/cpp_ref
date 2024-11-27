#include <cctype>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str[] = "Hello, I am here.";
    int count = 0;

    for (int i=0; i<=strlen(str); i++)
    {
        if (isblank(str[i]))
            count ++;
    }

    cout << "Number of blank characters: " << count << endl;

    return 0;
}
