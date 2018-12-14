#include "md5file.h"
#include <iostream>
#include<iostream>
#include<cstdio>
#include<ostream>
#include<fstream>
#include<sys/types.h>
#include<Windows.h>
#include<string>
#include "md5.h"
#include"md5file.h"
#include"md5global.h"


using namespace std;


int main()
{

	//拷贝文件
	//char *src = "test.txt";
	//char *dest = "test.copy.txt";

	//fstream infile(src, ios::in);
	//if (!infile.is_open())
	//{
	//	cout << "src_file open filed" << endl;
	//	return -1;
	//}

	//fstream outfile(dest, ios::out);
	//if (!outfile.is_open())
	//{
	//	cout << "dest_file open failed" << endl;
	//	return -1;
	//}
	//outfile << infile.rdbuf();
	//infile.close();
	//outfile.close();
	//cout << "Copy OK" << endl;


	////检查两个文件MD5是否一样

	std::cout << getFileMD5("D:\\VS2013\\prodect\\MD5算法_12-13\\MD5算法_12-13\\111.txt") << std::endl;
	//std::cout << getFileMD5(src) << std::endl;
	return 0;
}