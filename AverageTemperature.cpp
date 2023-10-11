#include <iostream>
using namespace std;
int main()
{
	float temp, sum=0;
	for (int i = 1; i <= 7; i++)
	{
		cout << "Enter average temperature for day " 
			<< i << " : ";
		cin >> temp;
		sum = sum + temp;
	}
	cout << "Average temperature of the week " 
		<< sum / 7 << endl;
	return 0;
}