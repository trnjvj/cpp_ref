#include <iostream>

using namespace std;

int main()
{
	int x, y;
	wchar_t str[20];
	wcout << L"Enter 2 integers:";
	wcin >> x >> y;
	wcout << L"Sum = " << (x+y) << endl;
	
	wcout << L"Enter a string:";
	wcin >> str;
	wcout << "You entered " << str;
	return 0;
}
