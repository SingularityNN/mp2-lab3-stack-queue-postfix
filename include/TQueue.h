#include <iostream>
using namespace std;
template <class T>
class TQueue
{
protected:
	int size;
	int start;
	int end;
	int count;
	T* pMem;

public:
	TQueue(int _size = 1) : size(_size),  start(-1), end(0), count(0), pMem(new T[size]) {
		if (size <= 0)
			throw -1;
		for (int i = 0; i < size; i++)
			pMem[i] = NULL;
	}
	TQueue(TQueue<T>& q) {
		this->size = q.size;
		this->pMem = new T[size];
		this->start = q.start;
		this->end = q.end;
		for (int i = 0; i < size; i++)
			this->pMem[i] = q.pMem[i];
	}
	~TQueue() {
		if (this->pMem != nullptr)
			delete[] this->pMem;
	}

	void Push(T a) {
		if (IsFull())
			throw "Cannot push elements, queue is full";
		if (start < 0) {
			start = 0;
		}
		count++;
		pMem[end] = a;
		if (end == size - 1) end = 0;	
		else end++;
			
	}
	T Get() {
		if (IsEmpty())
			throw "Cannot get elements, queue is empty";
		T res = pMem[start];
		pMem[start] = NULL;
		count--;
		if (start == size - 1) start = 0;
		else start++;
		return res;
	}

	bool IsFull() {
		return count == size;
	}
	bool IsEmpty() {
		return count == 0;
	}

	friend ostream& operator<<(ostream& ostr, const TQueue& q) {
		for (int i = 0; i < q.size; i++) {
			if (q.start == i)
				ostr << q.pMem[i] << " <-start" << endl;
			else if (q.end == i)
				ostr << q.pMem[i] << " <-end" << endl;
			else
				ostr << q.pMem[i] << endl;
			
		}
		return ostr;
	}



};
