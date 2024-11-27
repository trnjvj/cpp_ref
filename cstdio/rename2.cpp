#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	char oldname[] = "C:\\Users\\file_old.txt";
	char newname[] = "C:\\Users\\New Folder\\file_new.txt";
	
	/*	Deletes the file if exists */
	if (rename(oldname, newname) != 0)
		perror("Error moving file");
	else
		cout << "File moved successfully";
	
	return 0;
}
