#ifndef _STOCK_H__
#define _STOCK_H__



#include<string>

class Stock
{
private:
	std::string company;
	long shares;
	double share_val;
	double total_val;
	void set_tot()
	{
		total_val = shares *share_val;
	}

public:
	void acquire(const std::string &co, long n, double pr);
	void buy(long num, double price);
	void sell(long num, double price);
	void updata(double price);
	void show();

};



#endif