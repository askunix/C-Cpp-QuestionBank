#include<iostream>
#include"namesp.h"

void other(void);
void another(void);

int main()
{
	using debts::Debt;
	using debts::showDebt;

	Debt golf = { { "benny", "congratulations" }, 120.0 };
	showDebt(golf);
	other();
	another();
	return 0;
}


void other()
{
	using std::cout;
	using std::cin;
	using namespace debts;
	Person dg = { "jinmao", "muyang" };
	showPerson(dg);
	cout << std::endl;
	Debt zippy[3];
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		showDebt(zippy[i]);
	}
	cout << "Totle:" << sumDebts(zippy, 3) << std::endl;
	return;

}


void another()
{
	using pers::Person;
	Person collecter = { "mallon", "right" };
	pers::showPerson(collecter);
	std::cout << std::endl;
}


