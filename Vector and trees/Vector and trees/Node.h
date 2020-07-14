#pragma once

template <class T>
class Node
{ public:
	T node_value; Node<T>* right; Node<T>* left;

	Node<T>(T value);
};

