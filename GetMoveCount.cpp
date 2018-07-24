
#include<iostream>
#include<cstdio>

using namespace std;


int GetMoveCount(int arr[], int n)
{
	int Average = 0;
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}

	Average = sum / n;

	if (sum % n != 0 )
		return -1;

	int sum_N = 0;
	int Average_N = 0;
	for (int i = 0; i < n; i++)
	{
		sum_N += abs(arr[i] - Average);
	}
	Average_N = sum_N / 2;

	return Average_N / 2;
}


void test()
{
	int n = 0;
	cin >> n;
	int num[105];
	for (int i = 0; i < n; i++)
	{
		cin >> num[i];

	}
	int Resault = GetMoveCount(num, n);
	cout << Resault << endl;
}


int main()
{
	test();
	return 0;
}
