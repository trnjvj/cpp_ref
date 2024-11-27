#include <iostream>

using namespace std;

int main()
{
	wchar_t str[] = L"Learn C++ by examples";
	wchar_t ch = 'x';
	
	wcout.write(str,9);
	wcout << endl;
	wcout.put(ch);
	
	return 0;
}
