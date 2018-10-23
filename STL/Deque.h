#pragma once

template<class T, class Ref, class Ptr>
struct __DequeIterator
{
	T* _cur;
	T* _first;
	T* _last;
	T** _node;
};


template<class T>
class Deque
{
	typedef __DequeIterator<T, T&, T*> Iterator;
protected:
	//T** _buffPtr;
	//size_t _n;
	vector<T*> _buffPtr;
	size_t _size;

	Iterator _start;
	Iterator _finish;
};