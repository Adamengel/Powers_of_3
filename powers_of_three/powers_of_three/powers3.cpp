#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>

using namespace std;

int main()
{
	unsigned exponent = 0;
	unsigned number = 3;
	unsigned limit = 10000000;
	unsigned currentPower = 0;

	cout << setw(15) << left << "Base 10"
		 << setw(15) << left << "Base 16" << endl;

	while(true)
	{
		currentPower = pow(number, exponent++);
		if (currentPower > 10000000)
			break;
		cout << setw(15) << left << setbase(10) << currentPower;
		cout << setw(15) << left << setbase(16) <<currentPower << endl;
	}

	system("pause");
	return 0;
}