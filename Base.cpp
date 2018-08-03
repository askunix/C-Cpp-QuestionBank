#include<iostream>
using namespace std;

//// 菱形继承
//class A
//{
//public:
//	int _a;
//};
//
//
//class B :public A
//{
//public:
//	int _b;
//};
//
//
//
//class C :public A
//{
//public:
//	int _c;
//};
//
//
//
//class D :public B, public C
//{
//public:
//	int _d;
//};
//
//
//
//int main()
//{
//	D d;
//	d.B::_a = 1;
//	d.C::_a = 2;
//	d._b = 3;
//	d._c = 4;
//	d._d = 5;
//	return 0;
//}





//
//class A
//{
//public:
//	int _a;
//};
//
//
//class B :virtual public A
//{
//public:
//	int _b;
//};
//
//
//class C :virtual public A
//{
//public:
//	int _c;
//};
//
//
//class D :public B, public C
//{
//public:
//	int _d;
//};
//
//
//int main()
//{
//	D d;
//	d._a = 1;
//	d._b = 3;
//	d._c = 4;
//	d._d = 5;
//	return 0;
//}


//class Base
//{
//public:
//	virtual void f1()
//	{
//		cout << "Base::f1()" << endl;
//	}
//	int _base;
//};
//int main()
//{
//	Base b;
//	b._base = 1;
//	cout << sizeof(b) << endl;   // 8
//	return 0;
//}







class Base
{
public:
	virtual void f1()
	{
		cout << "Base::f1()" << endl;
	}
	int _base;
};


class Derived :public Base
{
public:
	virtual void f1()
	{
		cout << "Derived::f1()" << endl;
	}
	int _derived;
};



int main()
{
	Base b;
	Derived d;
	b._base = 1;
	d._base = 2;
	d._derived = 3;
	Base* pb = &b;
	pb->f1();
	pb = &d;
	pb->f1();

	return 0;
}
