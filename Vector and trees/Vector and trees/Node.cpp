#include "Node.h"

template<class T>
inline Node<T>::Node(T value)
{
	node_value = value;
	left = nullptr; right = nullptr;
}
