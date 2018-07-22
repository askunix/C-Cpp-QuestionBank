#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<memory>
#include<cassert>
#include<string>
using namespace std;


#if 0
char *my_strcpy(char *dest, const char *src)
{
	char *ret = dest;
	assert(NULL != dest);
	assert(NULL != src);

	while (*(dest++) = *(src++))
	{
		;
	}
	return ret;
}


size_t my_strlen(const char *dest)
{
	/*assert(NULL != dest);
	size_t count = 0;
	while (*(dest ++) != '\0')
	{
		count++;
	}
	return count;*/


	if (*dest == '\0')
		return 0;
	else
		return (1 + my_strlen(++dest));


}




int main()
{
	char *str = "hello world";
	char arr[30];
	my_strcpy(arr, str);
	my_strlen(str);
	cout << arr << endl;
	cout << my_strlen(str) << endl;
	return 0;
}




void *my_memcpy(void *dest, void *src, size_t count)
{
	char *p1 = (char *)dest;
	char *p2 = (char *)src;
	char *ret = p1;

	while (count--)
	{
		*p1 = *p2;
		p1++;
		p2++;
	}
	return ret;
}



int main()
{
	char arr1[] = "mmmdef";
	char arr2[] = "abcjjj";

	my_memcpy(arr1, arr2, 3);
	cout << arr1 << endl;
	return 0;
}


//int main()
//{
//	char arr1[] = "mmmdef";
//	char arr2[] = "abcdef";
//
//	my_memcpy(arr1, arr2, 3);
//		cout << arr1 << endl;
//	return 0;
//}

#endif





void *my_memmove(void *dest, void *src, size_t count)
{
	assert(NULL != dest);
	assert(NULL != src);
	char *pdest = (char *)dest;
	char *psrc = (char *)src;

	if (psrc < pdest && pdest < psrc + count)     //内存有重叠
	{
		cout << "内存重叠" << endl;
		while (count--)
			*(pdest + count) = *(psrc + count);
	}
	else
	{
		cout << "内存没有重叠" << endl;
		while (count--)
			*pdest++ = *psrc++;
	}
	return dest;
}



int main()
{
	{
		char arr[10] = "abcd123";
		my_memmove(arr + 3, arr+2, 4);
		cout << arr << endl;
		return 0;
	}
}
