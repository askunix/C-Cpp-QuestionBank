#include<iostream>
#include<string>
#include<cctype>
#include<vector>
#include<concurrent_priority_queue.h>
#include<map>
#include<algorithm>
#include<stack>


using namespace std;

//1、表达式计算



//2、异常






//
//int main()
//{
//	cout << Div(5, 0) << endl;
//	return 0;
//}





//double division(int a, int b)
//{
//	if (b == 0)
//	{
//		throw "Division by zero condition!";
//	}
//	return (a / b);
//}
//
//int main()
//{
//	int x = 50;
//	int y = 0;
//	double z = 0;
//
//	try {
//		z = division(x, y);
//		cout << z << endl;
//	}
//	catch (const char* msg) {
//		cerr << msg << endl;
//	}
//
//	return 0;
//}


#include<exception>
#include<stdexcept>

int main()
{
	int m, n;
	
	while (cin >> m >> n)
	{
		try
		{
			cout << m / n;
		}
		catch (runtime_error)
		{
			cout << "Enter Y or N" << endl;
			char c;
			cin >> c;

			if (!cin || c == 'N')
				break;
		}
	}
}









//int main()
//{
//	string str;
//	while (getline(cin, str))
//	{
//		/*if (!str.empty())
//		{
//			cout << str << endl;
//		}*/
//
//		if (str.size() > 5)
//		{
//			cout << str << endl;
//		}
//	}
//	return 0;
//}


//int main()
//{
//	string str("hello word");
//	for (auto c: str)
//	{
//		if (isalnum(c))
//			cout << "OK" << endl;
//	}
//}








