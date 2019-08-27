//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//
//template<typename T>
//class A 
//{
//public:
//	bool cmp(const T &t1, const T &t2) {
//		return t1 == t2;
//	}
//};
//
//template<>
//class A<char*> 
//{   // 这里是全特化，仍然需要tempalte<>声明
//public:
//	bool cmp(const char* t1, const char* t2) {
//		while (*t1 != '\0' && *t2 != '\0') {
//			if (*t1 != *t2) {
//				return false;
//			}
//			++t1;
//			++t2;
//		}
//		return true;
//	}
//};
//
//int main() 
//{
//	A<int> cmp;
//	cout << cmp.cmp(1, 3) << endl;
//	char* c1 = "hello";
//	char* c2 = "hello";
//	A<char*>cmp1;
//	cout << cmp1.cmp(c1, c2) << endl;
//	return 0;
//}
//






//#include <iostream>
//#include <cstring>
//using namespace std;
//
//template<typename T1, typename T2>
//bool cmp(T1 &t1, T2 &t2) 
//{
//	return t1 == t2;
//}
//
//template<>
//bool cmp(char* &p1, char* &p2) 
//{
//	auto pt1 = p1, pt2 = p2;
//	while (*pt1 != '\0' && *pt2 != '\0') {
//		if (*pt1 != *pt2) {
//			return false;
//		}
//		++pt1;
//		++pt2;
//	}
//	return true;
//}
//
//int main() {
//	char* p1 = "test";
//	char* p2 = "test";
//	int a = 0, b = 1;
//	cout << cmp(a, b) << endl;   // 0
//	cout << cmp(p1, p2) << endl; // 1
//	return 0;
//}




#include <iostream>
#include <cstring>
using namespace std;

template<typename T, typename T1>
class A {
public:
	A() = default;
	A(const T1& n) {
		cout << n << endl;
	}
	bool cmp(const T &t1, const T &t2) {
		return t1 == t2;
	}
};

template<typename T1>  // 偏特化
class A<char*, T1> {
public:
	A() = default;
	A(T1& n) {
		cout << n << endl;
	}

	bool cmp(const char* t1, const char* t2) {
		while (*t1 != '\0' && *t2 != '\0') {
			if (*t1 != *t2) {
				return false;
			}
			++t1;
			++t2;
		}
		return true;
	}
};

int main() {
	char* p1 = "hello";
	char* p2 = "hello";
	A<int, char*>c(p1);
	cout << c.cmp(1, 2) << endl;
	A<char*, char*>c1(p2);  // 即使是偏特化，也要全部声明模板
	cout << c1.cmp(p1, p2) << endl;
	return 0;
}



