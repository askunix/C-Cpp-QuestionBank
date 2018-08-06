#include<iostream>
using namespace std;


//template<typename T>
//T ADD(T a, T b)
//{
//	cout << typeid(a).name() << endl;
//	return a + b;
//}
//
//
//int main()
//{
//	cout << ADD(2, 5) << endl;
//	cout << ADD(4.6, 6.98) << endl;
//	cout << ADD('1', '2') << endl;
//	cout << ADD(1, (int)'2') << endl;
//	cout << ADD<int>(3, '6') << endl;
//	return 0; 
//}
//
//
////函数模板不是一个真正的函数
////实际调用ADD<int>(2 , 4);   显式实例化
////隐式实例化，需要参数推演



template <class T, int N>
void PrintArray(T(&array)[N])
{
	cout << N << endl;
	for (int i = 0; i < N; i++)
	{
		cout << array[i] << "   ";
	}
	cout << endl;
}


int main()
{
	const int cout = 4;
	int a[5] = { 2, 3, 4, 5, 6 };
	int b[cout + 1];
	PrintArray(a);
	PrintArray(b);
	return 0;
}
