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
//#include <openssl/md5.h>

using namespace std;



//int get_file_md5(const std::string &file_name, std::string &md5_value)
//{
//	md5_value.clear();
//
//	std::ifstream file(file_name.c_str(), std::ifstream::binary);
//	if (!file)
//	{
//		return -1;
//	}
//
//	MD5_CTX md5Context;
//	MD5_Init(&md5Context);
//
//	char buf[1024 * 16];
//	while (file.good()) {
//		file.read(buf, sizeof(buf));
//		MD5_Update(&md5Context, buf, file.gcount());
//	}
//
//	unsigned char result[MD5_DIGEST_LENGTH];
//	MD5_Final(result, &md5Context);
//
//	char hex[35];
//	memset(hex, 0, sizeof(hex));
//	for (int i = 0; i < MD5_DIGEST_LENGTH; ++i)
//	{
//		sprintf(hex + i * 2, "%02x", result[i]);
//	}
//	hex[32] = '\0';
//	md5_value = string(hex);
//
//	return 0;
//}


int main(int argc, char *argv[])
{

	//拷贝文件
	char *src = "test.txt";
	char *dest = "test.copy.txt";

	fstream infile(src, ios::in);
	if (!infile.is_open())
	{
		cout << "src_file open filed" << endl;
		return -1;
	}

	fstream outfile(dest, ios::out);
	if (!outfile.is_open())
	{
		cout << "dest_file open failed" << endl;
		return -1;
	}
	outfile << infile.rdbuf();  
	infile.close();
	outfile.close();
	cout << "Copy OK" << endl;
	
	
	//检查两个文件MD5是否一样
	
	/*
	MD5 md5_src(src);
	string result_src = md5_src.md5();
	cout << "src  md5 is : " << result_src << endl;

	MD5 md5_dest(dest);
	string result_dest = md5_dest.md5();
	cout << "dest md5 is : " << result_dest << endl;
    */

	/*string md5_str_value;
	int ret = get_file_md5(src, md5_str_value);
	if (ret < 0)
	{
		cout << "get file MD5 failes" << endl;
		return -1;
	}

	cout << "src MD5 is: " << md5_str_value.c_str() << endl;*/
	std::cout << getFileMD5(src) << std::endl;



	return 0;
}


