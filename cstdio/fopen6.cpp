#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
	int c;
	FILE *fp;
	fp = fopen("file.txt", "a");
	char str[20] = "Hello Again.";
	if (fp)
	{
		putc('\n',fp);
		for(int i=0; i<strlen(str); i++) 
			putc(str[i],fp);
	}
	fclose(fp);
}
