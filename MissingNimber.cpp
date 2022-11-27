#include <iostream>
using namespace std;

int main()
{
	int n;
	long long result = 0;
	long long temp = 0;
	cin >> n;
	for (int i = 1; i < n + 1; i++)
	{
		result += i;
	}
	for (int i = 1; i < n; i++)
	{
		int tempN;
		cin >> tempN;
		temp += tempN;
	}
	cout << result - temp;
}