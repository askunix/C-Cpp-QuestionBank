#include<stdio.h>
#include<iostream>

using namespace std;
#define NUM 1024



int GetCount(int*arr, int n, int index)
{
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		sum += arr[i];
	}
	int average = sum / n;

	if (average >= index)
		return 0;


	else
	{
		int Sum = 0;
		for (int i = 0; i < n; ++i)
		{
			Sum += arr[n - i] + 100 * i;
			int Average = 0;
			Average = Sum / n;

			if (Average >= index)
			{
				return i;
			}
		}
		
	}
}




int main()
{
	int M;
	scanf("%d", &M);
	int j = 0;
	
	int n = 0;
	int index = 0;
	int arr[10][NUM] = { 0 };

	for (j = 0; j < M; j++)
	{
		


		scanf("%d", &n);      //人
		scanf("%d", &index);    //成绩

		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &arr[j][i]);
		}
		
		//GetCount(arr, n, index);
	}

	for (int i = 0; i < M; ++i)
	{
		cout << GetCount(*arr + i, n, index) << endl;
	}


		return 0;
}
