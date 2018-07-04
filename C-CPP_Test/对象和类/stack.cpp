#include<iostream>
#include"stock.h"
////////理解类的定义

void Stock::acquire(const std::string &co, long n, double pr)
{
	company = co;
	if (n < 0)
	{
		std::cout << "NUM of shares can't be negative;" << company << "share set to 0." << std::endl;
		shares = 0;
	}
	else
	{
		shares = n;
	}
	share_val = pr;
	set_tot();
}



void Stock::buy(long num, double price)
{
	if (num < 0)
	{
		std::cout << "NUM of share purchased can't be negative:" << std::endl;
	}
	else
	{
		shares += num;
		share_val = price;
		set_tot();
	}
}



void Stock::sell(long num, double price)
{
	using std::cout;
	if (num < 0)
	{
		cout << "^^^^^^^^^^" << std::endl;
	}
	else if (num > shares)
	{
		cout << "22222222222" << std::endl;
	}
	else
	{
		shares -= num;
		share_val = price;
		set_tot();
	}
}



void Stock::updata(double price)
{
	share_val = price;
	set_tot();
}



void Stock::show()
{
	std::cout << "company:" << company
		<< "shares:" << shares << '\n'
		<< "share price:" << share_val << '\n'
		<< "Totl:" << total_val << std::endl;
}





