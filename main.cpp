#include <iostream>

int main()
{
	int Num1 = 0;
	int Num2 = 0;

	// std::cin 같은 경우 한 번에 받지 말 것
	std::cout << "첫 번째 숫자를 입력하세요 : ";
	std::cin >> Num1;
	std::cout << "두 번째 숫자를 입력하세요 : ";
	std::cin >> Num2;

	std::cout << Num1 << " + " << Num2 << " = " << Num1 + Num2 << '\n';
	std::cout << Num1 << " - " << Num2 << " = " << Num1 - Num2 << '\n';
	std::cout << Num1 << " * " << Num2 << " = " << Num1 * Num2 << '\n';
	std::cout << Num1 << " / " << Num2 << " = " << Num1 / Num2 << '\n';
	std::cout << Num1 << " % " << Num2 << " = " << Num1  % Num2 << '\n';

	// 이것은 집에서 수정한 것이다!
	return 0;
}