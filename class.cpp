#include<iostream>
using namespace std;

class Data
{
public:
	Data(int year = 1990, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}

	void Display()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}

private:
	int _year;
	int _month;
	int _day;
};

int main()
{
	Data B(1996, 10, 6);
	B.Display();
	return 0;
}
