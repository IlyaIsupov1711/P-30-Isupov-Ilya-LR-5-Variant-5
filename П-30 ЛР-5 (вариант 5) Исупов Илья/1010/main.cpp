#include <iostream>
#include <string>

int check2(int cost);
std::string check(int cost);
void output(int cost, std::string name, int expDate, std::string numStore);

struct Candys
{
	int cost;
	std::string name;
	int expirationDate;
	std::string numShop;
};
int main()
{
	setlocale(LC_ALL, "RUS");
	Candys firCandy;
	firCandy.cost = 40;
	firCandy.name = "Дивные края";
	std::cout << "конфеты <<Дивные края>>" << std::endl;
	firCandy.expirationDate = check2(firCandy.cost);
	firCandy.numShop = check(firCandy.cost);
	if (firCandy.cost >= 30 && firCandy.cost <= 50)
	{
		output(firCandy.cost, firCandy.name, firCandy.expirationDate, firCandy.numShop);
	}
	else
	{
		std::cout << "Стоймость конфет меньше 30 рублей за кг или больше 50 рублей за кг.";
		std::cout << "" << std::endl;
	};
	Candys secCandy;
	secCandy.cost = 30;
	secCandy.name = "Космос";
	std::cout << "конфеты <<Космос>>" << std::endl;
	secCandy.expirationDate = check2(secCandy.cost);
	secCandy.numShop = check(secCandy.cost);
	if (secCandy.cost >= 30 && secCandy.cost <= 50)
	{
		output(secCandy.cost, secCandy.name, secCandy.expirationDate, secCandy.numShop);
	}
	else
	{
		std::cout << "Стоймость конфет меньше 30 рублей за кг или больше 50 рублей за кг.";
		std::cout << "" << std::endl;
	};
	Candys thiCandy;
	std::cout << "конфеты <<Трюфель>>" << std::endl;
	thiCandy.cost = 20;
	thiCandy.name = "Трюфель";
	thiCandy.expirationDate = check2(thiCandy.cost);
	thiCandy.numShop = check(thiCandy.cost);
	if (thiCandy.cost >= 30 && thiCandy.cost <= 50)
	{
		output(thiCandy.cost, thiCandy.name, thiCandy.expirationDate, thiCandy.numShop);
	}
	else
	{
		std::cout << "Стоймость конфет меньше 30 рублей за кг или больше 50 рублей за кг.";
		std::cout << "" << std::endl;
	};
	Candys fouCandy;
	std::cout << "конфеты <<Русские традиции>>" << std::endl;
	fouCandy.cost = 45;
	fouCandy.name = "Русские традиции";
	fouCandy.expirationDate = check2(fouCandy.cost);
	fouCandy.numShop = check(fouCandy.cost);
	if (fouCandy.cost >= 30 && fouCandy.cost <= 50)
	{
		output(fouCandy.cost, fouCandy.name, fouCandy.expirationDate, fouCandy.numShop);
	}
	else
	{
		std::cout << "Стоймость конфет меньше 30 рублей за кг или больше 50 рублей за кг.";
		std::cout << "" << std::endl;
	};
	Candys fifCandy;
	fifCandy.cost = 40;
	fifCandy.name = "Метеорит";
	fifCandy.expirationDate = check2(fifCandy.cost);
	fifCandy.numShop = check(fifCandy.cost);
	if (fifCandy.cost >= 30 && fifCandy.cost <= 50)
	{
		output(fifCandy.cost, fifCandy.name, fifCandy.expirationDate, fifCandy.numShop);
	}
	else
	{
		std::cout << "Стоймость конфет меньше 30 рублей за кг или больше 50 рублей за кг.";
		std::cout << "" << std::endl;
	};
	return 0;
}
