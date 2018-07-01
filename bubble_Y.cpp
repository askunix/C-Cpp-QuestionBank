#include<iostream>
#include<string>

using namespace std;

//对于已经有序的序列，不用再做循环比较

void bubble_sort_Y1(int *arr, int sz)
{
	int flag = 1;
	for (int i = 0; i < sz; i++)
	{
		flag = 0;
		for (int j = 0; j < sz - i - 1; j++)
		{
			flag = 0;
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
				flag = 1;
			}
		}
		if (flag == 0)
			break;
	}
}


//每次记录最后一个交换后的下标，因为后面的先有序。
void bubble_sort_Y2(int *arr, int sz)
{
	int flag = sz;
	int k = 0;
	for (int i = 0; i < flag; ++i)
	{
		int k = flag;
		flag = 0;
		for (int j = 0; j < k; ++j)
		{
			if (arr[j] < arr[j + 1])
			{
				flag = j;
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}


void bubbleSort2(int arr[], int n) {
	int i = 0;
	int j = 0;
	int k = 0;
	int tmp = 0;
	int flag = n;

	for (i = 0; i < flag; ++i) {
		k = flag;
		flag = 0;
		for (j = 0; j < k; ++j) {
			if (arr[j] < arr[j + 1]) {
				flag = j;
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}


int main()
{
	int arr[] = { 6, 5, 7,4,5,3,8, };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort_Y2(arr, sz);
	for (int i = 0; i < sz; i++) 
		cout << arr[i] << "  ";
	return 0;
}
