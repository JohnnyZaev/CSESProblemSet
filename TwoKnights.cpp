#include <iostream>
using namespace std;

int main()
{
	long long n;
	cin >> n;
	long long totalCombs, notValidComps;
	for (long long i = 1; i <= n; i++)
	{
		totalCombs = ((i * i) * ((i * i) - 1)) / 2;
		notValidComps = 4 * (i - 1) * (i - 2);
		cout << totalCombs - notValidComps << endl;
	}
}