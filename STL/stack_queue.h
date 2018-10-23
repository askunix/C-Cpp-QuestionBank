#include <stack>
#include <queue>

#include <vector>
#include <list>

void test_stack()
{
	stack<int, list<int>> s1;
	s1.push(1);
	s1.push(2);
	s1.push(3);
	s1.push(4);

	while (!s1.empty())
	{
		cout<<s1.top()<<" ";
		s1.pop();
	}
	cout<<endl;
}

void test_queue()
{
	queue<int, list<int>> q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);

	while (!q.empty())
	{
		cout<<q.front()<<" ";
		q.pop();
	}
	cout<<endl;
}

