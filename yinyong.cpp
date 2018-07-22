//#include<iostream>
//#include<string>
//
//using namespace std;
//
////引用就是别名，对引用操作和对变量操作是一样的。
//
//
//
//#if 0
//void fun(int &x)
//{
//	cout << "形参值：" << x << endl;
//	cout << "形参地址：" << &x << endl;
//	x += 10;
//}
//
//void fun2(int *num)
//{
//	cout << "形参值：" << *num << endl;
//	cout << "形参地址值" << num << endl;
//	cout << "形参地址" << &num << endl;
//	*num = (*num) + 10;
//}
//
//
//
//int main()
//{
//	int num = 4;
//	int a = 3;
//
//	cout << "实参num值" << num << endl;
//	cout << "实参num的地址" << &num << endl;
//
//	fun(num);
//
//	cout << "num的值" << num << endl;
//
//	fun2(&a);
//	cout << "实参a" << a << endl;
//	cout << "实参a地址" << &a << endl;
//	return 0;
//}
//
//
////引用和目标变量的地址是一样的，对引用的修改就是对目标变量的修改
////指针变量是有自己的值的（2686608），和num的地址（2686696）不一样，而引用的地址是和变量的值一样的。
//
//
//#endif
//
//
//
//int main()
//{
//
//	return 0;
//}


#include <iostream>
using namespace std;
class A {
public:
	int b;
	char c;
	virtual void print() {
		cout << "this is father’s fuction! " << endl;
	}
};
class B : A {
public:
	virtual void print() {
		cout << "this is children’s fuction! " << endl;
	}
};
int main(int argc, char * argv[]) {
	cout << sizeof(A) << " " << sizeof(B) << endl;
	return 0;
}
