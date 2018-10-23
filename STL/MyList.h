#pragma once

template<class T>
struct ListNode
{
	ListNode<T>* _next;
	ListNode<T>* _prev;
	T _data;

	ListNode(const T& data = T())
		:_next(NULL)
		,_prev(NULL)
		,_data(data)
	{}
};

//typedef __ListIterator<T, T&, T*> Iterator;
//typedef __ListIterator<T, const T&, const T*> ConstIterator;

template<class T, class Ref, class Ptr>
struct __ListIterator
{
	typedef ListNode<T> Node;
	typedef __ListIterator<T,Ref, Ptr> Self;

	Node* _node;

	__ListIterator(Node* node)
		:_node(node)
	{}

	Ref operator*()
	{
		return _node->_data;
	}
	
	Ptr operator->()
	{
		return &(operator*());
	}

	Self& operator++()
	{
		_node = _node->_next;
		return *this;
	}

	Self operator++(int)
	{
		Self tmp(_node);
		_node = _node->_next;

		return tmp;
	}

	Self& operator--()
	{
		_node = _node->_prev;
		return *this;
	}

	Self operator--(int)
	{
		Self tmp(_node);
		_node = _node->_prev;

		return tmp;
	}

	bool operator==(const Self& s) const
	{
		return _node == s._node;
	}

	bool operator!=(const Self& s) const
	{
		return _node != s._node;
	}
};

template<class T>
class MyList
{
	typedef ListNode<T> Node;
public:
	typedef __ListIterator<T, T&, T*> Iterator;
	typedef __ListIterator<T, const T&, const T*> ConstIterator;

	Iterator Begin()
	{
		//return Iterator(_head->_next);
		return _head->_next;
	}

	Iterator End()
	{
		//return Iterator(_head);
		return _head;
	}


	ConstIterator Begin() const
	{
		//return Iterator(_head->_next);
		return _head->_next;
	}

	ConstIterator End() const
	{
		//return Iterator(_head);
		return _head;
	}

	MyList()
	{
		_head = new Node;
		_head->_next = _head;
		_head->_prev = _head;
	}

	void PushBack(const T& x)
	{
		Node* tail = _head->_prev;
		// tail newnode  _head
		Node* newnode = new Node(x);
		tail->_next = newnode;
		newnode->_prev = tail;

		newnode->_next = _head;
		_head->_prev = newnode;
	}

	void Insert(Iterator pos, const T& x)
	{
		Node* cur = pos._node;
		Node* prev = cur->_prev;
		Node* newnode = new Node(x);

		prev->_next = newnode;
		newnode->_prev = prev;
		newnode->_next = cur;
		cur->_prev = newnode;
	}

	void Erase(Iterator pos);

protected:
	Node* _head;
};

void PrintList(const MyList<int>& l1)
{
	MyList<int>::ConstIterator it1 = l1.Begin();
	while(it1 != l1.End())
	{
		cout<<*it1<<" ";
		++it1;
	}
	cout<<endl;
}

void TestMyList()
{
	MyList<int> l1;
	l1.PushBack(1);
	l1.PushBack(2);
	l1.PushBack(3);
	l1.PushBack(4);
	
	PrintList(l1);

	cout<<sizeof(MyList<int>::Iterator)<<endl;
	cout<<sizeof(ListNode<int>*)<<endl;
}