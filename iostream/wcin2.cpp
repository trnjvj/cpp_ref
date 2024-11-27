#include <iostream>

using namespace std;

int main()
{
	wchar_t str[50], ch;
	
	wcout << L"Enter a string: ";
	wcin.getline(str, 20);
	
	wcout << L"Enter a character: ";
	wcin.get(ch);
	
	wcout << L"String = " << str << endl;
	wcout << L"Character = " << ch << endl;
	
	return 0;
}
