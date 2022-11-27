#include <iostream>

int main(void)
{
	long long n;
	std::cin >> n;
	while (true)
	{
		std::cout << n << " ";
		if (n == 1)
			break;
		if (n % 2)
			n = n * 3 + 1;
		else
			n /= 2;
	}
	std::cout << std::endl;
}