#include "Vector.h"
#include <assert.h>


template<class T>
inline void Vector<T>::push_back(T value)
{
	if (vector_size == capacitance) {
		doubling();
}
	arr[vector_size] =value ;
	vector_size++;
}

template<class T>
void Vector<T>::doubling()
{
	capacitance = capacitance * 2;
	T* temp_arr = new T[capacitance];
	for (int i=0; i <= vector_size-1; i++) {
		temp_arr[i] = arr[i];
	}
	delete[] arr;
	arr =temp_arr ;
}

template<class T>
void Vector<T>::pop_back()
{
	assert(vector_size!=0);
	vector_size--;
}

template<class T>
T Vector<T>::back()
{
	assert(vector_size!=0);
	return arr[vector_size-1];
}

template<class T>
T& Vector<T>::operator[](int index)
{
	assert(index >= 0 && index <= vector_size - 1);
	return arr[index];
}

template<class T>
Vector<T>::Vector()
{
	vector_size = 0; capacitance = 1;
	arr =new T[capacitance] ;
}


