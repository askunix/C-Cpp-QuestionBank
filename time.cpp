#include<cstdio>
#include<cstdlib>
#include<iostream>
using namespace std;
#define DataType int
#include<exception>
#include<map>
#include<vector>




//
//
//int main()
//{
//	vector <int> V;
//	V.push_back(8);
//	return 0;
//}


//int main(int argc, char *argv[], char *envp[])
//{
//	for (int i = 0; i < argc; ++i)
//		cout << argv[i] << endl;
//	cout << endl;
//
//	for (int i = 0; envp[i] != NULL; ++i)
//		cout << envp[i] << endl;
//	return 0;
//}


#include<ctime>

//int main()
//{
//	long i = 9999999999999L;
//	clock_t start, finsh;
//	double time = 0;
//	start = clock();
//	cout << "start" << endl;
//	while (i--)
//		;
//	finsh = clock();
//	cout << "end" << endl;
//	time = (double)(finsh - start);
//	cout << time <<"ms"<<endl << endl;
//	return 0;
//}


#include<tchar.h>
#include<sys/timeb.h>
#include<time.h>
#include<Windows.h>

int main()
{
	struct timeb startTime, endTime;

	ftime(&startTime);

	Sleep(1000);

	ftime(&endTime);

	cout << (endTime.time - startTime.time) * 1000 + (endTime.millitm - startTime.millitm) << endl;
}
