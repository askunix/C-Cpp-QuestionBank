#define _CRT_SECURE_NO_WARNINGS 1
#include"FileCopy.h"




//void test()
//{
//	ifstream fi("D:\\VS2013\\prodect\\FileCopy_12-7\\FileCopy_12-7\\111.txt");
//	ofstream fo("D:\\VS2013\\prodect\\FileCopy_12-7\\FileCopy_12-7\\555.txt");
//	char str;
//	
//	while (fi.get(str))
//	{
//		fo << str;
//	}
//	fi.close();
//	fo.close();
//}
//
//
//int main()
//{
//	test();
//	cout << "OK" << endl;
//	return 0;
//}







//string read_file_into_string()
//{
//	ifstream ifile("111.txt");
//	ostringstream buf;
//	char ch;
//	while (buf && ifile.get(ch))
//		buf.put(ch);
//	return buf.str();
//}
//
//
//int main()
//{
//	read_file_into_string();
//	return 0;
//}




//int main()
//{
//	FILE *fp = fopen("out.txt", "wb");
//	for (int i = 0; i < 3; ++i)
//	{
//		if (fp)
//		{
//			float *result = new float[1];
//			assert(fread(result, sizeof(float), 1, fp) > 0);
//			cout << result[0];
//		}
//	}
//	return 0;
//}



//int main()
//{
//	ifstream fd("111.txt");
//	int count = 0;
//	char ch;
//	while (!fd.eof())
//	{
//		ch = fd.get();
//		if (ch == 'i')
//			count++;
//	}
//	fd.close();
//	cout << count << endl;
//}


//
//int main()
//{
//	double a = 1234567.23456789, b = 4567890123.56789012;
//	FILE* pFile = fopen("a.txt", "w");
//	fprintf(pFile, "%16.6f", a);
//	fprintf(pFile, "%20.6", b);
//	fclose(pFile);
//
//
//	pFile = fopen("a.txt", "r");
//	fscanf(pFile, "%lf", &a);
//	fscanf(pFile, "%lf", &b);
//	fclose(pFile);
//	printf("%f %f", a, b);
//}




//void test()
//{
//	char a;
//	FILE *pf = fopen("b.txt", "r");
//	fscanf(pf, "%c", &a);
//	printf("%c\n", a);
//
//}






//void test()
//{
//	FILE *rf = fopen("c.txt", "r");
//	char a[1024][128];
//
//	int i = 0;
//	while (fgets(a[i], 128, rf))
//	{
//		i++;
//	}
//
//	int n = i;
//	cout << "行数：" << n << endl;
//
//	fclose(rf);
//
//	i = 0;
//	while (i < n)
//	{
//		printf("%s", a[i++]);
//	}
//}
//
//int main()
//{
//	test();
//	return 0;
//}


//
//int main()
//{
//	ofstream outfile("copy.txt", ios_base::app);
//
//	if (!outfile)
//	{
//		cout << "failed<<endl" << endl;
//		exit(-1);
//	}
//
//	outfile.put('1').put('2') << endl;
//
//	outfile << "jjisuanjiwangluojishu" << "  " << (1 + 5) << endl;
//	return 0;
//}



//int main()
//{
//	ofstream OutFile("test.txt");    /*ios_base::app*/
//
//	if (!OutFile)
//	{
//		cout << "failed" << endl;
//		return -1;
//	}
//
//	char ch;
//
//	while (cin.get(ch))
//	{
//		OutFile.put(ch);
//	}
//	return 0;
//}



////打开仅用于输入的文件
//
//
//int main()
//{
//	cout << "File Name:" << endl;
//	string filename;
//	cin >> filename;
//
//	ifstream fp(filename.c_str());
//
//	if (!fp)
//	{
//		cout << "failed" << endl;
//		return -1;
//	}
//
//	char ch;
//	
//	while (fp.get(ch))
//	{
//		cout.put(ch);
//	}
//
//
//}





