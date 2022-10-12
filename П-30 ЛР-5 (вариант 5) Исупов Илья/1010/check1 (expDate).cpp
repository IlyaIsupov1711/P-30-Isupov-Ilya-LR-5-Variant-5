#include <iostream>
#include <string>

int check2(int cost)
{
	setlocale(LC_ALL, "RUS");
	int expDate = 0;
	if (cost >= 30 && cost <= 55)
	{
		std::cout << "Введите срок годности конфет: ";
		std::cin >> expDate;
	}
	return expDate;
}