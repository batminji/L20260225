#include <iostream>

int main()
{
	int SumResult = 0;
	int EvenSumResult = 0;
	int OddSumResult = 0;
	int ThreeMultipleSumResult = 0;

	for (int i = 1; i < 101; ++i)
	{
		SumResult += i;
		if (i % 2 == 0)
		{
			EvenSumResult += i;
		}
		else
		{
			OddSumResult += i;
		}

		if (i % 3 == 0)
		{
			ThreeMultipleSumResult += i;
		}
	}

	std::cout << "1부터 100까지의 합 : " << SumResult << '\n';
	std::cout << "1부터 100 사이 짝수들의 합 : " << EvenSumResult << '\n';
	std::cout << "1부터 100 사이 홀수들의 합 : " << OddSumResult << '\n';
	std::cout << "1부터 100 사이 3의 배수의 합 : " << ThreeMultipleSumResult << '\n';
	return 0;
}