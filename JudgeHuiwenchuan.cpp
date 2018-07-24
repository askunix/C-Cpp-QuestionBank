#include<iostream>
#include<string>
using namespace std;


int JudgeHuiwenchuan(char *str, int sz)
{
	int start = 0;
	int end = sz - 1;
	while (start < end)
	{
		if (str[start] != str[end])
			return -1;
		++start;
		--end;
	}
	return 1;
}


int main()
{
	char str[] = "aabaa";
	int sz = sizeof(str) / sizeof(str[0]) - 1;
	int ret = JudgeHuiwenchuan(str, sz);


	if (ret == -1)
		cout << "NO" << endl;
	else
		cout << "YES" << endl;
	return 0;
}
