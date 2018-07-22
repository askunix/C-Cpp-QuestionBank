//#include <stdafx.h>
#include <stdlib.h>
#include<stdio.h>
#include <string.h>

void print_array(char *p, char n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("p[%d] = %d\n", i, p[i]);
	}
}

int main(int argc, char* argv[])
{
	char *p = (char *)malloc(1024 * 1024 * 1024);//在堆中申请了内存
	memset(p, 'a', sizeof(int)* 10);//初始化内存
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		p[i] = i + 65;
	}
	print_array(p, 10);
	free(p);//释放申请的堆内存
	getchar();
}
