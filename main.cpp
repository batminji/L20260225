#include <iostream>

int main()
{
	int Total = 0;

	for (int i = 1; i <= 100; i += 2)
	{
		Total += i;
	}

	std::cout << Total << '\n';
	return 0;
}