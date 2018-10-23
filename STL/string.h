#pragma once
#include <string>

// typedef baisc_string<char> string
// 1.深拷贝 win+buff[16] 2.引用计数的写时拷贝 linux

void test_string()
{
	/*string s1("hello");
	string s2 = "hello";
	string::iterator sit = s1.begin();
	while (sit != s1.end())
	{
		cout<<*sit<<endl;
		++sit;
	}

	for (size_t i = 0 ; i < s1.size(); ++i)
	{
		cout<<s1[i]<<endl;
	}

	s1.clear();

	cout<<s1<<endl;

	s1.push_back('1');
	s1.append("22222");
	cout<<s1<<endl;*/

	string s1 = "hello";
	s1 += ' ';
	s1 += "w";
	s1 += "orld";
	cout<<s1<<endl;

	s1.replace(5, 1, "%%%");
	cout<<s1<<endl;
	
		/*string s;
	while (getline(cin, s))
	{
		cout<<s<<endl;
	}*/

	//while (cin>>s)// istream& operator>>(istream& in, string& s)
	//{
	//	cout<<s<<endl;
	//}
}