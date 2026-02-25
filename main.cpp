#include <iostream>

int main()
{
	int SumResult = 0;

	for (int i = 1; i < 101; ++i)
	{
		SumResult += i;
	}

	std::cout << SumResult << '\n';
	return 0;
}