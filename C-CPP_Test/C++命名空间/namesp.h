#include<string>

namespace pers
{
	struct Person
	{
		std::string fname;
		std::string lname;
	};
	void getPerson(Person &);
	void showPerson(const Person &);
}

namespace debts
{
	using namespace pers;
	struct Debt
	{
		Person name;
		double amount;
	};
	void getDeb(Debt &);
	void showDebt(const Debt &);
	double sumDebts(const Debt ar[], int n);
}