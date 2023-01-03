#include <iostream>
using namespace std;

void findNumber(void)
{
	long long y, x;
	cin >> y >> x;

	if (y >= x)
	{
		if (y % 2)
		{
			cout << (y - 1) * (y - 1) + x << endl;
		}
		else
		{
			cout << (y - 1) * (y - 1) + (y - x) + y << endl;
		}
	}
	else
	{
		if (x % 2)
		{
			cout << (x - 1) * (x - 1) + x + (x - y) << endl;
		}
		else
		{
			cout << (x - 1) * (x - 1) + y << endl;
		}
	}
}

int main(void)
{
	long long t;
	cin >> t;
	for (long long i = 0; i < t; i++)
		findNumber();
}