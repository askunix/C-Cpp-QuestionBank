#include<iostream>
#include<cstdio>
using namespace std;

void Hash_Search(int *arr, int sz)
{
	int HashTable[1024] = { 0 };
	for (int i = 0; i < sz; ++i)
	{
		cout << "存放" << arr[i] << endl;
		HashTable[(arr[i])] ++;
	}

	cout <<  endl;

	for (int j = 0; j < sz; j++)
	{
		cout << "查看" << j << "出现次数: " << HashTable[j] << endl;
	}
	

	cout << endl;
	for (int j = 0; j < sz; j++)
	{
		if (HashTable[j] >= 2)
		{
			//return arr[j];
			cout << "结果：" << arr[j - 1] << endl;
			exit(0);
		}
	}
	
}

int main()
{
	int arr[6] = { 1, 4, 3, 3, 2, 3 };
	 Hash_Search(arr, 6);
	return 0;
}
