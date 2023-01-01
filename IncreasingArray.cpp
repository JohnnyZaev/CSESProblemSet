#include <iostream>
using namespace std;

int main()
{
	long long n;
	cin >> n;
	long long arr[n];
	for (long long i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	long long result = 0;
	for (long long i = 1; i < n; i++)
	{
		while (arr[i] < arr[i - 1])
		{
			arr[i]++;
			result++;
		}
	}
	cout << result;
}

