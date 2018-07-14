void my_itoa(int num, char *str, int radix)
{
	char *left = str;
	int flag = num;
	if (num < 0)   //考虑到负数的情况
		num = -num;
	while (num > 0)
	{
		*str++ = num % radix + '0';
		num /= radix;
	}
	if (flag < 0)
	{
		*str++ = '-';
	}
	*str = '\0';
	//此时是逆序存放的，需要翻转过来
	char *right = str - 1;
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		++left;
		--right;
	}
}




int main()
{
	int num =-123;
	char buf[20] = { 0 };
	my_itoa(num, buf, 10);
	printf("%s\n", buf);
	return 0;
}
