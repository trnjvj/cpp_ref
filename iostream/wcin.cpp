#include <iostream>

using namespace std;

int main()
{
	wchar_t word[20];
	
	wcout << L"Enter a word: ";
	wcin >> word;
	
	wcout << word;
	return 0;
}
