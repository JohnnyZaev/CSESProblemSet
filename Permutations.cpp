#include <iostream>
using namespace std;

int main(void)
{
	long long n;
	cin >> n;
	if (n > 3 || n == 1)
	{
		if (n % 2)
		{
			for (long long i = 2; i < n; i += 2)
				cout << i << " ";
			for (long long i = 1; i <= n; i += 2)
				cout << i << " ";
		}
		else
		{
			for (long long i = 2; i <= n; i += 2)
				cout << i << " ";
			for (long long i = 1; i < n; i += 2)
				cout << i << " ";
		}
	}
	else
		cout << "NO SOLUTION";
}
