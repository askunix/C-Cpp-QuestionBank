#include<iostream>
#include<string.h>
#include<vector>
#include<algorithm>

using namespace std;

//int main()
//{
//	int num = 12;
//	vector<int> v;
//
//	for (int i = 0; i < 10; i++)
//		v.push_back(3 * i);
//
//	cout << "Vector<int> v : ";
//	for (vector<int>::size_type index = 0; index != v.size(); ++index)
//		cout << v[index] << "  ";
//	cout << endl;
//
//	vector<int>::iterator result;
//	result = find(v.begin(), v.end(), num);
//	if (result != v.end())
//		cout << "匹配元素的索引：" << result - v.begin() << endl;
//	else
//		cout << "没有匹配元素的索引：" << endl;
//	return 0;
//}

//bool finda(int x)
//{
//	return (x) % 10 ? 0 : 1;
//}
//
//int main()
//{
//	vector<int> V;
//
//	for (int i = 0; i < 15; ++i)
//		V.push_back((i + 1)*(i + 2));
//
//	cout << "vector<int> v is: ";
//	for (vector<int>::size_type index = 0; index != V.size(); ++index)
//	    cout << V[index] << "  ";
//	cout << endl;
//
//	vector < int >::iterator result;
//	result = find_if(V.begin(), V.end(), finda);
//	if (result != V.end())
//		cout << "第一个能整除10的元素" << *result << endl;
//		cout<< "索引" << result - V.begin() << endl;
//
//
//	return 0;
//}


//bool num(int x, int y)
//{
//	return x == y;
//}
//
//
//int main()
//{
//	vector<int> V1;
//	vector<int> V2;
//
//	for (int i = 0; i < 10; i++)
//		V1.push_back(i);
//
//	V1.push_back(1);
//	V1.push_back(2);
//	V1.push_back(3);
//
//	for (int i = 1; i < 4; ++i)
//		V2.push_back(i);
//
//	cout << "Vector<int> V1 : ";
//	for (vector<int>::size_type index = 0; index != V1.size(); ++index)
//		cout << V1[index] << "  ";
//
//	cout << endl;
//
//	cout << " vector<int> V2: ";
//	for (vector<int>::size_type index = 0; index != V2.size(); ++index)
//		cout << V2[index] << "  ";
//
//	cout << endl;
//
//	//vector<int>::iterator result = find_end(V1.begin, V1.end(), V2.begin(), V2.end());
//	vector<int>::iterator result = find_end(v1.begin(), v1.end(), v2.begin(), v2.end());
//
//
//	if (result != V1.end)
//		cout << "V2在V1的最后位置" << endl;
//	else
//		cout << "V2不在V1中" << endl;
//
//}





//
//int main(void)
//{
//	vector<int> v1;
//	vector<int> v2;
//
//	for (int i = 0; i<10; ++i)
//		v1.push_back(i);
//
//	v1.push_back(1);
//	v1.push_back(2);
//	v1.push_back(3);
//	v1.push_back(2);
//	v1.push_back(3);
//	v1.push_back(4);
//	
//
//	for (int i = 1; i<4; ++i)
//		v2.push_back(i);
//
//	cout << "vector<int> v1: ";
//	for (vector<int>::size_type index = 0; index != v1.size(); ++index)
//		cout << v1[index] << " ";
//
//	cout << endl;
//
//	cout << "vector<int> v2: ";
//	for (vector<int>::size_type index = 0; index != v2.size(); ++index)
//		cout << v2[index] << " ";
//
//	cout << endl;
//
//	vector<int>::iterator result = find_end(v1.begin(), v1.end(), v2.begin(), v2.end());
//
//	if (result != v1.end())
//		cout << "v2在v1的最后位置：v[" << result - v1.begin() << "]" << endl;
//	else
//		cout << "v2不在v1中" << endl;
//
//	return 0;
//}







//int main()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//		v.push_back(i);
//	v.push_back(5);
//
//	cout << "vector<int> v is:";
//	for (vector<int>::size_type index = 0; index != v.size(); ++index)
//		cout << v[index] << "  ";
//	cout << endl;
//
//
//	int Count = count(v.begin(), v.end(), 5); //统计5出现的次数
//	cout << "次数：" << Count << endl;
//	return 0;
//}

//bool greater6(int x)
//{
//	return x % 3  == 0;
//}
//
//int main()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//		v.push_back(i);
//
//	cout << "vector<int> v is : ";
//	for (vector<int>::size_type index = 0; index != v.size(); ++index)
//		cout << v[index] << "  ";
//	cout << endl;
//
//	int Ret = count_if(v.begin(), v.end(), greater6);
//	
//	cout << Ret << endl;
//
//}




//int test()
//{
//	vector<int> v1;
//	vector<int> v2;
//
//	for (int i = 0; i < 10; i++)
//		v1.push_back(i);
//
//	for (int i = 4; i < 6; i++)
//		v2.push_back(i);
//
//	cout << "vector<int> v1 :";
//	for (vector<int>::size_type index = 0; index < v1.size(); index++)
//		cout << v1[index] << "  ";
//	cout << endl;
//
//	cout << "vector<int> v2 :";
//	for (vector<int>::size_type index = 0; index < v2.size(); index++)
//		cout << v2[index] << "  ";
//	cout << endl;
//
//	vector<int>::iterator result = search(v1.begin(), v1.end(), v2.begin(), v2.end());
//
//	if (result != v1.end())
//		cout << "V2的元素包含在v1中，范围：v1[" << result - v1.begin() << "]~v1[" << result + v2.size() - v1.begin() - 1 << "]" << endl;
//	else
//		cout << "v2的元素不包含在v1中" << endl;
//
//	return 0;
//}
//
//
//
//int main()
//{
//	test();
//	return 0;
//}





//void test()
//{
//	vector<int> v1;
//	vector<int> v2;
//
//	for (int i = 11; i<15; ++i)
//		v1.push_back(i);
//
//	for (int i = 0; i<10; ++i)
//		v2.push_back(i);
//
//	cout << "vector<int> v1: ";
//	for (vector<int>::size_type index = 0; index != v1.size(); ++index)
//		cout << v1[index] << " ";
//
//	cout << endl;
//
//	cout << "vector<int> v2: ";
//	for (vector<int>::size_type index = 0; index != v2.size(); ++index)
//		cout << v2[index] << " ";
//
//	cout << endl<<endl;
//
//
//	copy(v1.begin(), v1.end(), v2.begin());
//
//	cout << "vector<int> v2: ";
//	for (vector<int>::size_type index = 0; index != v2.size(); ++index)
//		cout << v2[index] << " ";
//
//	cout << endl;
//
//
//
//	cout << "vector<int> v1: ";
//	for (vector<int>::size_type index = 0; index != v1.size(); ++index)
//		cout << v1[index] << " ";
//
//	cout << endl;
//}
//
//
//
//int main()
//{
//	test();
//	return 0;
//}




//int op_increase(int x)
//{
//	return x*x;
//}
//
//void test()
//{
//	vector<int> v1;
//	vector<int> v2;
//
//	for (int i = 11; i<15; ++i)
//		v1.push_back(i);
//
//	for (int i = 0; i<10; ++i)
//		v2.push_back(i);
//
//	cout << "vector<int> v1: ";
//	for (vector<int>::size_type index = 0; index != v1.size(); ++index)
//		cout << v1[index] << " ";
//
//	cout << endl;
//
//	cout << "vector<int> v2: ";
//	for (vector<int>::size_type index = 0; index != v2.size(); ++index)
//		cout << v2[index] << " ";
//
//	cout << endl<<endl;
//
//
//	transform(v1.begin(), v1.end(), v2.begin(), op_increase);
//
//	cout << "vector<int> v2: ";
//	for (vector<int>::size_type index = 0; index != v2.size(); ++index)
//		cout << v2[index] << " ";
//
//	cout << endl;
//
//
//
//	cout << "vector<int> v1: ";
//	for (vector<int>::size_type index = 0; index != v1.size(); ++index)
//		cout << v1[index] << " ";
//
//	cout << endl;
//}


//
//int main()
//{
//	test();
//	return 0;
//}







//int main()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//		v.push_back(i);
//	v.push_back(5);
//
//	cout << "vector<int> v is:";
//	for (vector<int>::size_type index = 0; index != v.size(); ++index)
//		cout << v[index] << "  ";
//	cout << endl<<endl;
//
//	 
//	replace(v.begin(), v.end(), 5, 100);    //将5替换成100
//	cout << "vector<int> v is:";
//	for (vector<int>::size_type index = 0; index != v.size(); ++index)
//		cout << v[index] << "  ";
//	cout << endl;
//	return 0;
//}



//int main()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//		v.push_back(i);
//	v.push_back(5);
//
//	cout << "vector<int> v is:";
//	for (vector<int>::size_type index = 0; index != v.size(); ++index)
//		cout << v[index] << "  ";
//	cout << endl<<endl;
//
//	 
//	fill_n(v.begin(), 3, 100);    //将5替换成100
//	cout << "vector<int> v is:";
//	for (vector<int>::size_type index = 0; index != v.size(); ++index)
//		cout << v[index] << "  ";
//	cout << endl;
//	return 0;
//}


//int increase(void)
//{
//	static int x = 1;
//
//	return (x++) + (x+2);
//}
//
//int main(void)
//{
//	vector<int> v(10);
//
//	generate(v.begin(), v.end(), increase);
//
//	cout << "vector<int> v: ";
//	for (vector<int>::size_type i = 0; i<v.size(); ++i)
//		cout << v[i] << " ";
//
//	cout << endl;
//
//	return 0;
//}





//int main()
//{
//	vector<int> v;
//
//	for (int i = 1; i<=10; i++)
//		v.push_back(i);
//
//	cout << "vector<int> v: ";
//	for (vector<int>::size_type i = 0; i<v.size(); ++i)
//		cout << v[i] << " ";
//
//	cout << endl;
//
//	remove(v.begin(), v.end(), 5);     //
//
//	cout << "Remove vector<int> v: ";
//	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)   
//		cout << *it << " ";
//
//	cout << endl;
//
//	return 0;
//}






//int main(void)
//{
//	vector<int> v;
//
//	v.push_back(1);
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(3);
//	v.push_back(4);
//	v.push_back(4);
//
//	cout << "vector<int> v: ";
//	for (vector<int>::size_type i = 0; i<v.size(); ++i)
//		cout << v[i] << " ";
//
//	cout << endl;
//
//	unique(v.begin(), v.end());
//
//	cout << "Unique vector<int> v: ";
//	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
//		cout << *it << " ";
//
//	cout << endl;
//
//	return 0;
//}






bool function(int x, int y)
{
	return (x > y);
}

int main(void)
{
	vector<int> v;

	v.push_back(1);
	v.push_back(7);
	v.push_back(8);
	v.push_back(4);
	v.push_back(9);
	v.push_back(3);
	v.push_back(10);
	v.push_back(15);

	cout << "vector<int> v: ";
	for (vector<int>::size_type i = 0; i<v.size(); ++i)
		cout << v[i] << " ";

	cout << endl;

	sort(v.begin(), v.end(), function);

	cout << "Sort vector<int> v: ";
	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
		cout << *it << " ";

	cout << endl;

	return 0;
}













