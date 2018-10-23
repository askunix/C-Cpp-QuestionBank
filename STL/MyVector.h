#pragma once

template<class T>
class MyVector
{
public:
	typedef T* Iterator;
	typedef const T* ConstIterator;

	MyVector()
		:_start(0)
		,_finish(0)
		,_endofstorage(0)
	{}

	~MyVector()
	{
		delete[] _start;
		_start = _finish = _endofstorage = 0;
	}

	size_t Capacity()
	{
		return _endofstorage - _start;
	}

	size_t Size()
	{
		return _finish - _start;
	}

	void Reserve(size_t n)
	{
		Expand(n);
	}

	void Resize(size_t n, const T& val = T())
	{
		if (n < Size())
		{
			_finish = _start + n;
		}
		else
		{
			if (n > Capacity())
			{
				Expand(n);
			}

			while (_finish != _start + n)
			{
				*_finish = val;
				++_finish;
			}
		}
	}

	void Expand(size_t n)
	{
		if (n > Capacity())
		{
			size_t size = Size();
			T* tmp = new T[n];
			for (size_t i = 0; i < size; ++i)
			{
				tmp[i] = _start[i];
			}
			delete[] _start;
			_start = tmp;
			_finish = _start + size;
			_endofstorage = _start + n;
		}
	}

	void PushBack(const T& x)
	{
		if (_finish == _endofstorage)
		{
			size_t capacity = Capacity()*2;
			if (capacity == 0)
				capacity = 3;
			Expand(capacity);
		}

		*_finish = x;
		++_finish;
	}

	void Insert(Iterator pos, const T& x);
	void Erase(Iterator pos);

	T& operator[](size_t pos)
	{
		assert(pos < Size());
		return _start[pos];
	}

	T& at(size_t pos)
	{
		if (pos >= Size())
		{
			throw out_of_range("pos out of range");
		}

		return _start[pos];
	}

	Iterator Begin()
	{
		return _start;
	}

	Iterator End()
	{
		return _finish;
	}

	ConstIterator Begin() const
	{
		return _start;
	}

	ConstIterator End() const
	{
		return _finish;
	}

protected:
	Iterator _start;
	Iterator _finish;
	Iterator _endofstorage;
};

void Print_MyVector(const MyVector<int>& v1)
{
	MyVector<int>::ConstIterator it1 = v1.Begin();
	while (it1 != v1.End())
	{
		//*it1 = 10;
		cout<<*it1<<" ";
		++it1;
	}
	cout<<endl;
}

void TestMyVector()
{
	MyVector<int> v1;
	v1.PushBack(1);
	v1.PushBack(2);
	v1.PushBack(3);
	v1.PushBack(4);

	Print_MyVector(v1);

	//for (size_t i = 0; i < v1.Size(); ++i)
	//{
	//	cout<<v1[i]<<" ";
	//}
	//cout<<endl;

	//MyVector<int>::Iterator it1 = v1.Begin();
	//while (it1 != v1.End())
	//{
	//	cout<<*it1<<" ";
	//	++it1;
	//}
	//cout<<endl;
}