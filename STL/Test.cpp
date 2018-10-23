//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
////void Test ()
////{
////	int i = 10;
////	double d = i; // 相近类型 -- 隐式
////
////	int* p = &i;
////	int j = (int)p; // 不相关类型 -- 强制类型的转换
////}
//
//// 历史包袱
////void Test ()
////{
////	int i = 10;
////	double d = static_cast<double>(i); // 相关类型--C隐式类型的转换
////
////	int* p = &i;
////	int j = reinterpret_cast<int>(p); // 不相关类型--C部分强制类型转换
////
////	const int* p1 = p;
////	int* p2 = const_cast<int*>(p1); // 去const属性--C部分强制类型转换
////}
//
////typedef void (* FUNC)();
////
////int DoSomething (int i)
////{
////	cout<<"DoSomething" <<i<<endl;
////	return 0;
////}
////
////void Test ()
////{
////	//
////	// reinterpret_cast可以编译器以FUNC的定义方式去看待 DoSomething函数
////	// 所以非常的BUG，下面转换函数指针的代码是不可移植的，所以不建议这样用
////	// C++不保证所有的函数指针都被一样的使用，所以这样用有时会产生不确定的结果
////	//
////	FUNC f = reinterpret_cast< FUNC>(DoSomething );
////	f();
////}
//
////void Test()
////{
////	volatile const int a = 10;
////	cout<<a<<endl;
////
////	//int* p = (int*)&a;
////	int* p = const_cast<int*>(&a);
////	*p = 20;
////
////	cout<<*p<<endl;
////	cout<<a<<endl;
////}
//
//class A
//{
//public:
//	virtual void f()
//	{
//		cout<<__FUNCTION__<<endl;
//	}
//	int _a;
//};
//
//class B : public A
//{
//public:
//	//virtual void f()
//	//{
//	//	cout<<__FUNCTION__<<endl;
//	//}
//
//	int _b;
//};
//
//void func(A* p)
//{
//	//p->f();
//
//	// p是指向父类还是指向子类？
//	B* p1 = (B*)p;
//	B* p2 = dynamic_cast<B*>(p);
//	printf("%p,%p\n", p1, p2);
//}
//
//void Test()
//{
//	A a;
//	B b;
//	func(&a);
//	func(&b);
//}
//
////void push_back(const string& x);
//
//class AA
//{
//public:
//	//explicit AA(int a)
//	AA(int a, int b)
//		:_a(a)
//	{
//		cout<<"构造"<<endl;
//	}
//
//	AA(const AA& a)
//	{
//		cout<<"拷贝构造"<<endl;
//	}
//
//protected:
//	int _a;
//};
//
//void FAA(AA a)
//{}
//
//int main()
//{
//	//Test();
//
//	AA a1(10);
//	AA a2 = 20; // 隐式类型转换-- 具有单参数构造函数的类型
//
//	FAA(a1);
//	FAA(30);
//
//	//string s1 = "1111";
//	//string s2("2222");
//	//string s3 = s2; //s3(s2)
//
//	//vector<string> v;
//	//v.push_back(s1);
//	//v.push_back("222222");
//
//	return 0;
//}
//

#include <iostream>
#include <assert.h>
#include <windows.h>
using namespace std;

#include "Vector.h"
#include "MyVector.h"
#include "string.h"

#include "list.h"
#include "MyList.h"

#include "stack_queue.h"
#include "map_set.h"

int main()
{
	//test_vector();
	//TestMyVector();
	//test_string();

	//test_list();
	//TestMyList();

	//test_stack();
	//test_queue();

	//test_set();
	//test_mutilset();
	test_map();

	return 0;
}
