#include<iostream>


using namespace std;




//0 1 1 2 3 5 8 13 21 34 
size_t GetResault(int num)
{
	if (num < 0)
		return -1;

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
			left = f - num;

		else
		{
			right = f - num;
			break;
		}
	}
	return left>right ? left : right;
}



int main()
{
	int num = 20;
	size_t resault = 0;

	resault = GetResault(20);    //return 1
	cout << resault << endl;
	return 0;
}
