#include <iostream>
using namespace std;

int main()
{
	string a;
	int result = 1;
	int temp = 1;
	cin >> a;
	for (int i = 1; i < a.length(); i++)
	{
		if (a[i] == a[i - 1])
		{
			temp++;
		}
		else
		{
			if (result < temp)
				result = temp;
			temp = 1;
		}
	}
	if (result < temp)
		result = temp;
	cout << result;
}