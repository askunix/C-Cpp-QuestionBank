#include <list>

void print_list(const list<int>& l1)
{
	list<int>::const_iterator it1 = l1.begin();
	while (it1 != l1.end())
	{
		cout<<*it1<<" ";
		++it1;
	}
	cout<<endl;
}

void test_list()
{
	list<int> l1;
	l1.push_back(1);
	l1.push_back(2);
	l1.push_back(3);
	l1.push_back(4);

	print_list(l1);

	l1.reverse();
	print_list(l1);

	l1.push_back(-1);
	l1.push_back(100);
	l1.push_back(2);
	l1.push_back(4);
	l1.sort(greater<int>());
	//l1.reverse();
	//l1.unique();
	print_list(l1);
}