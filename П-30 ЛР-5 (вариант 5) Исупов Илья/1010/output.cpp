#include <iostream>
#include <string>

void output(int cost, std::string name, int expDate, std::string numStore)
{
	setlocale(LC_ALL, "RUS");
	std::string date;
	std::cout << "���������: " << cost <<"� �� 1 ��."<< std::endl;
	std::cout << "��������: " << name <<"."<< std::endl;
	if (expDate == 1)
	{
		date = "���";
	}
	if (expDate > 1 && expDate < 4)
	{
		date = "����";
	}
	else if (expDate > 4)
	{
		date = "���";
	}
	std::cout << "���� ��������: " << expDate<<" " << date << "." << std::endl;
	std::cout << "�������� ��������: " << numStore <<"."<< std::endl;
	std::cout << "" << std::endl;
}