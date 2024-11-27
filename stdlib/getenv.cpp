#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	/* A list of possible environment variables*/
	const char *env_var[5] = {"PUBLIC","HOME","SESSIONNAME","LIB","SystemDrive"};
	char *env_val[5];

	for(int i=0; i<5; i++)
	{
		/* Getting environment value if exists */
		env_val[i] = getenv(env_var[i]);
		if (env_val[i] != NULL)
			cout << "Variable = " << env_var[i] << ", Value= " << env_val[i] << endl;
		else
			cout << env_var[i] << " doesn't exist" << endl;
	}
}
