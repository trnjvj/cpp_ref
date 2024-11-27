#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	time_t curr_time;

	time(&curr_time);
	cout << "Current date and time: " << asctime(localtime(&curr_time));

	return 0;
}
