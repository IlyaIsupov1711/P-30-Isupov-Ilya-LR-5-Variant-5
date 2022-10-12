#include <iostream>
#include <string>

void output(int cost, std::string name, int expDate, std::string numStore)
{
	setlocale(LC_ALL, "RUS");
	std::string date;
	std::cout << "Стоймость: " << cost <<"р за 1 кг."<< std::endl;
	std::cout << "Название: " << name <<"."<< std::endl;
	if (expDate == 1)
	{
		date = "Год";
	}
	if (expDate > 1 && expDate < 4)
	{
		date = "Года";
	}
	else if (expDate > 4)
	{
		date = "Лет";
	}
	std::cout << "Срок годности: " << expDate<<" " << date << "." << std::endl;
	std::cout << "Название магазина: " << numStore <<"."<< std::endl;
	std::cout << "" << std::endl;
}