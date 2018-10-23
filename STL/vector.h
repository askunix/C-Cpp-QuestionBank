#pragma once
#include <vector>

void print_vector(const vector<int>& v)
{
	vector<int>::const_iterator it = v.begin();
	while (it != v.end())
	{
		//*it = 10;
		cout<<*it<<" ";
		++it;
	}
	cout<<endl;
}

//void test_vector()
//{
//	vector<int> v1;
//	v1.push_back(1);
//	v1.push_back(2);
//	v1.push_back(3);
//	v1.push_back(4);
//
//	print_vector(v1);
//	cout<<v1.max_size()<<endl;
//
//	/*for (size_t i = 0; i < v1.size(); ++i)
//	{
//		if (v1[i] % 2 == 0) 
//		{
//			v1[i] *= 2;
//		}
//
//		cout<<v1[i]<<" ";
//	}
//	cout<<endl;
//
//	vector<int>::iterator it1 = v1.begin();
//	while (it1 != v1.end())
//	{
//		if (*it1 % 2 == 0) 
//		{
//			*it1 *= 2;
//		}
//
//		cout<<*it1<<" ";
//		++it1;
//	}
//	cout<<endl;*/
//}

//void test_vector()
//{
//	//size_t N = 10000000;
//
//	//int begin, end;
//
//	//begin = GetTickCount();
//	//vector<int> v1;
//	//for (size_t i = 0; i < N; ++i)
//	//{
//	//	v1.push_back(i);
//	//}
//	//end = GetTickCount();
//
//	//cout<<v1.size()<<":"<<end-begin<<endl;
//
//
//	//begin = GetTickCount();
//	//vector<int> v2;
//	//v2.resize(N, 10);
//	////for (size_t i = 0; i < N; ++i)
//	////{
//	////	v2.push_back(i);
//	////}
//	//end = GetTickCount();
//
//	//cout<<v2.size()<<":"<<end-begin<<endl;
//
//	vector<int> v1;
//	v1.push_back(1);
//	v1.push_back(1);
//	v1.push_back(1);
//	v1.push_back(1);
//	v1.push_back(1);
//
//	cout<<v1.size()<<endl;
//	cout<<v1.capacity()<<endl;
//	v1.resize(10, 100);
//	cout<<v1.size()<<endl;
//	cout<<v1.capacity()<<endl;
//}

//void test_vector()
//{
//	vector<int> v1;
//	v1.resize(10000);
//	cout<<v1.capacity()<<endl;
//
//	v1.clear();
//	v1.resize(0);
//	v1.reserve(0);
//
//	{
//		vector<int> v2;
//		v1.swap(v2);
//	}
//
//	cout<<v1.capacity()<<endl;
//}

#include <algorithm>

//template<class Iterator>
//void find(Iterator first, Iterator last, const T& x)
//{
//	while(first != last)
//	{
//		if (*first == x)
//		{
//			return first;
//		}
//	}
//
//	return last;
//}

void test_vector()
{
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
	v1.push_back(5);

	vector<int>::iterator it = find(v1.begin(), v1.end(), 30);
	v1.insert(it, 10);

	it = find(v1.begin(), v1.end(), 30);
	v1.erase(it);
}
