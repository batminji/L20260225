#include <iostream>

int main()
{
	int Num1{};
	int Num2{};

	std::cout << "숫자를 2개 입력하세요 : ";
	std::cin >> Num1 >> Num2;
	std::cout << Num1 << " + " << Num2 << " = " << Num1 + Num2 << std::endl;
	std::cout << Num1 << " - " << Num2 << " = " << Num1 - Num2 << std::endl;
	std::cout << Num1 << " * " << Num2 << " = " << Num1 * Num2 << std::endl;
	std::cout << Num1 << " / " << Num2 << " = " << Num1 / Num2 << std::endl;
	std::cout << Num1 << " % " << Num2 << " = " << Num1  % Num2 << std::endl;

	return 0;
}