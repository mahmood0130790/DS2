#pragma once
template <class T>
class Vector
{
private:
	int vector_size; int capacitance; T* arr; T node_value;

public:
	void push_back(T value);
	void doubling();
	void pop_back();
	T back();

	T& operator [](int index);
	Vector();
};

