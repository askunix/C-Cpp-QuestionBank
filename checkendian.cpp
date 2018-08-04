//#include<iostream>
//#include<cstdio>
//#include<cstdlib>
////
////using namespace std;
////
////
////
////
////int CheckCPU()
////{
////	union W
////	{
////		int a;
////		char b;
////	}c;
////
////	c.a = 1;
////	if (c.b == 1)
////		return 1;
////	else
////		return -1;
////}
////
////
////int main()
////{
////	
////	return 0;
////}
//
//
//
//
//
//
////
////#include<stdio.h>
////union var{
////	char c[4];
////	int i;
////};
////
////int main(){
////	union var data;
////	data.c[0] = 0x04;//因为是char类型，数字不要太大，算算ascii的范围~
////	data.c[1] = 0x03;//写成16进制为了方便直接打印内存中的值对比
////	data.c[2] = 0x02;
////	data.c[3] = 0x11;
////	//数组中下标低的，地址也低，按地址从低到高，内存内容依次为：04,03,02,11。总共四字节！
////	//而把四个字节作为一个整体（不分类型，直接打印十六进制），应该从内存高地址到低地址看，0x11020304，低位04放在低地址上。
////	printf("%x\n", data.i);
////}
//
//
//
//
//
//
//
////#include <stdio.h>
//struct s1   //1
//{
//	union u
//	{
//		int i;
//	};
//
//	struct ss1
//	{
//		int i;
//	};
//};
//
//
//struct s2       //8
//{
//	union 
//	{
//		int i;
//	};
//	struct 
//	{
//		int i;
//	};
//};
//
//
//
//
//
//struct s3{//the same to s2   //8
//	union su3{
//		int i;
//	}su33;
//	struct ss3{
//		int i;
//	}ss33;
//};
//
//union su4{
//	int i;
//};
//struct ss4{
//	int i;
//};
//struct s4{//the same to s3             //8
//	union su4 su44;
//	struct ss4 ss44;
//};
//struct s5{//the same to s1                   //1
//	union su4;
//	struct ss4;
//};
//
//struct s6
//{//the same to s1                    //1
//	union
//	{
//		int;
//	};
//	struct
//	{
//		int;
//	};
//
//};
//
//
//
//
//int main(){
//	struct s1 sVal1;
//	struct s2 val
//	{
//
//	};
//
//	printf("sVal1's size:%d\n", sizeof(sVal1));
//
//	printf("s2:%d\n", sizeof(val));
//	return 0;
//}
//
//
//





#include<iostream>
#include<cstdio>


void checkPoint(void)
{
	int i = 1;
	char *pointer;
	pointer = (char *)&i;

	if (*pointer==1)
	{
		printf("litttle_endian");
	}

	else
	{
		printf("big endian/n");

	}
}

int main()
{
	checkPoint();
	return 0;
}
