#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

int my_atoi(const char *str)
{
	assert(str);
	int num = 0;
	int flag = 1;
	//跳过空白字符
	while (*str == ' ' || *str == '\t' || *str == '\n')
		str++;

	//判断转换后数字的正负
	if (*str == '-')
		flag = -1;

	//如果有输入符号，则要将此符号跳过
	if (*str == '-' || *str == '+')
		str++;

	//每一位数字转为数字
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		str++;
	}

	return num*flag;
}

void test()
{
	long num = 0;
	char *str = "123456";
	num = my_atoi(str);
	printf("num = %d\n", num);
}

int main()
{
	test();
	return 0;
}
