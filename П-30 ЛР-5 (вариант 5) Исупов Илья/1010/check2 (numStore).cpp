#include <iostream>
#include <string>

std::string check(int cost)
{
	setlocale(LC_ALL, "RUS");
	std::string numShop;
	if (cost >= 30 && cost <= 55)
	{
		std::cout << "������� ����� ��������: ";
		std::cin >> numShop;
	}
	return numShop;
}