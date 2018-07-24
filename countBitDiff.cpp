#include<iostream>
#include<string>
using namespace std;

int countBitDiff(int m, int n) 
{
	int q = 0;
	int count = 0;
	q = m^n;
	while (q)
	{
		if (q % 2 == 1)
		{
			count++;
		}
		q = q / 2;
	}
	return count;
}

int main()
{
	int m = 2;
	int n = 3;
	int count = countBitDiff(m, n);
	cout << count << endl;
	return 0;
}
