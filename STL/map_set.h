#pragma once

#include <set>


//template<class K, class V>
//class pair
//{
//	K first;
//	V second;
//};

// Key³¡¾°--1.ÅĞ¶ÏÔÚ»òÕß²»ÔÚ 2.¹ıÂË/È¥ÖØ 3.ÅÅĞò
void test_set()
{
	typedef set<int>::iterator SetIntIter;
	set<int> s1;
	s1.insert(1);
	s1.insert(3);
	s1.insert(0);
	s1.insert(1);
	s1.insert(1);
	s1.insert(5);
	s1.insert(5);
	s1.insert(5);

	pair<SetIntIter, bool> ret = s1.insert(10);
	ret = s1.insert(5);

	SetIntIter it1 = s1.begin();
	while (it1 != s1.end())
	{
		cout<<*it1<<" ";
		++it1;
	}
	cout<<endl;

	SetIntIter pos = s1.find(3);
	if (pos != s1.end())
	{
		//*pos = 100;
		//s1.erase(pos);
	}

	pos = s1.find(5);

	it1 = s1.begin();
	while (it1 != s1.end())
	{
		cout<<*it1<<" ";
		++it1;
	}
	cout<<endl;
}

void test_mutilset()
{
	multiset<int> s1;
	s1.insert(1);
	s1.insert(3);
	s1.insert(0);
	s1.insert(1);
	s1.insert(1);
	s1.insert(5);
	s1.insert(5);
	s1.insert(5);

	multiset<int>::iterator it1 = s1.begin();
	while (it1 != s1.end())
	{
		cout<<*it1<<" ";
		++it1;
	}
	cout<<endl;
	
	multiset<int>::iterator pos = s1.find(1);
	++pos;
	++pos;
	++pos;
	cout<<s1.count(1)<<endl;
}

//vector<int> FindDiff(const vector<int>& v1, const vector<int>& v2)
//{
//	vector<int> ret;
//	set<int> s;
//	// O(N*logN)
//	for (size_t i = 0; i < v1.size(); ++i)
//	{
//		s.insert(v1[i]);
//	}
//
//	for (size_t j = 0; j < v2.size(); ++j)
//	{
//		if(s.find(v2[j]) != s.end())
//		{
//			ret.push_back(v2[j]);
//		}
//	}
//
//	return ret;
//}

//vector<int> FindDiff(const vector<int>& v1, const vector<int>& v2)
//{
//	vector<int> ret;
//	set<int> s;
//	// O(N*logN)
//	s.insert(v1.begin(), v1.end());
//
//	for (size_t j = 0; j < v2.size(); ++j)
//	{
//		if(s.count(v2[j]))
//		{
//			ret.push_back(v2[j]);
//		}
//	}
//
//	return ret;
//}

//vector<int> FindDiff(const vector<int>& v1, const vector<int>& v2)
//{
//	vector<int> ret;
//	set<int> s1;
//	s1.insert(v1.begin(), v1.end());
//
//	set<int> s2;
//	s2.insert(v2.begin(), v2.end());
//
//	set<int>::iterator it1 = s1.begin();
//	set<int>::iterator it2 = s2.begin();
//	while (it1 != s1.end() && it2 != s2.end())
//	{
//		if (*it1 < *it2)
//		{
//			++it1;
//		}
//		else if (*it1 > *it2)
//		{
//			++it2;
//		}
//		else
//		{
//			ret.push_back(*it1);
//			++it1;
//			++it2;
//		}
//	}
//
//	return ret;
//}

///////////////////////////////////////////////////////////////////
// 
// map key/value 1.×Öµä 2.Í³¼Æ´ÎÊı

#include <map>
#include <string>

//template<class K, class V>
//inline pair<K, V> make_pair(const K& k, const V& v)
//{
//	return pair<K, V>(k, v);
//}

//void test_map()
//{
//	map<string, string> dict;
//	dict.insert(pair<string, string>("sort", "ÅÅĞò"));
//	dict.insert(pair<string, string>("string", "×Ö·û´®"));
//	dict.insert(pair<string, string>("insert", "²åÈë"));
//	dict.insert(pair<string, string>("insert", "²åÈë"));
//	dict.insert(pair<string, string>("left", "×ó±ß"));
//	dict.insert(pair<string, string>("left", "Ê£Óà"));
//	dict.insert(make_pair("iterator", "µü´úÆ÷"));
//
//	map<string, string>::iterator pos = dict.find("left");
//	if (pos != dict.end())
//	{
//		//pos->first = "¸Ä¸Ä";
//		pos->second = "Ê£Óà";
//	}
//
//	map<string, string>::iterator it = dict.begin();
//	while (it != dict.end())
//	{
//		//cout<<(*it).first<<":"<<(*it).second<<endl;
//		cout<<it->first<<":"<<it->second<<endl;
//		++it;
//	}
//	cout<<endl;
//
//	pos = dict.find("insert");
//	if (pos != dict.end())
//	{
//		dict.erase(pos);
//	}
//}

typedef map<string, int>::iterator CountIter;
struct CountIterCompare
{
	bool operator()(CountIter it1 ,CountIter it2)
	{
		return it1->second > it2->second;
	}
};

vector<string> getlike(vector<string>& v, int k)
{
	map<string, int> countmap;
	for (size_t i = 0;i < v.size(); ++i)
	{
	/*	CountIter it = countmap.find(v[i]);
		if (it != countmap.end())
		{
			it->second++;
		}
		else
		{
			countmap.insert(make_pair(v[i], 1));
		}*/
		countmap[v[i]]++; // ?
	}

	multiset<CountIter, CountIterCompare> sortset;
	CountIter cit = countmap.begin();
	while (cit != countmap.end())
	{
		sortset.insert(cit);
		++cit;
	}
	
	vector<string> ret;
	multiset<CountIter, CountIterCompare>::iterator sit = sortset.begin();
	while (sit != sortset.end())
	{
		if (k--)
		{
			ret.push_back((*sit)->first);
		}

		++sit;
	}

	return ret;
}

void test_map()
{
	vector<string> v;
	v.push_back("Æ»¹û");
	v.push_back("Ïã½¶");
	v.push_back("Æ»¹û");
	v.push_back("Æ»¹û");
	v.push_back("Ïã½¶");
	v.push_back("Ïã½¶");
	v.push_back("Ïã½¶");
	v.push_back("Ïã½¶");
	v.push_back("Î÷¹Ï");
	v.push_back("²İİ®");
	v.push_back("Î÷¹Ï");
	v.push_back("²İİ®");
	v.push_back("²İİ®");

	getlike(v, 2);
}