#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

void DelAllname(char *str, char *dest)
{
	int HashTable[256] = { 0 };
	while (*dest)
	{
		HashTable[*dest] = 1;
		dest++;
	}

	int i = 0;
	int j = 0;
	while (str[i])
	{
		if (HashTable[str[i]] == 0)
		{
			str[j] = str[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';

}


void test()
{
	char arr[100] = "abcdef";
	char dest[100] = "bc";
	
	//gets(arr);
	//gets(dest);

	DelAllname(arr, dest);
	cout << arr << endl;
}




int main()
{
	test();
	return 0;
}







//#include<vector>
//#include<iostream>
//#include<cstdio>
//#include<string>
//using namespace std;
//////////////////////////////////////////////////
//int n = 0;
//int sum = 0;
//int count = 0;
//
//void GetCount(vector<int>arr, int p, int q)
//{
//	int count = 0;
//	if (q == sum)
//		count++;
//
//	if (q > sum)
//	{
//		return;
//	}
//
//	for (int i = p; i < n; i++)
//	{
//		q += arr[i];
//		GetCount(arr, i + 1, q);
//		q -= arr[i];
//
//	}
//
//}
//
//
//
//void test()
//{
//	
//	cin >> n;
//	cin >> sum;
//	
//
//	vector<int>arr(n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//
//	GetCount(arr, 0, 0);
//
//	cout << count << endl;
//	
//
//}
//
//
//
//
//int main()
//{
//	test();
//	
//	return 0;
//}





//
//#include<vector>
//#include<iostream>
//#include<cstdio>
//#include<string>
//using namespace std;
//
//
//
//int main()
//{
//	int n = 0;
//	int sum = 0;
//	cin >> n >> sum;
//
//	vector<long long> arr(sum + 1);
//	vector<int>b(n);
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> b[i];
//	}
//
//	arr[0] = 1;
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = sum; j >= b[i]; j--)
//		{
//			arr[j] += arr[j - b[i]];
//		}
//	}
//
//
//	cout << arr[sum] << endl;
//
//	return 0;
//}







