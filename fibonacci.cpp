#include<iostream>


using namespace std;




//0 1 1 2 3 5 8 13 21 34 
size_t GetResault(int num)
{
	
	int fib0 = 0;
	int fib1 = 1;
	int left = 0;
	int right = 0;
	int f = 0;

	while (1)
	{
		f = fib0 + fib1;
		fib0 = fib1;
		fib1 = f;

		if (f < num)
			left = num - f;

		else
		{
			right = f - num;
			break;
		}
	}
	return left>right ? right : left;
}



int main()
{
	int num = 1;
	size_t resault = 0;

	resault = GetResault(num);    //return 1
	cout << resault << endl;
	return 0;
}
