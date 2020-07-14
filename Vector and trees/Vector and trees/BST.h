#pragma once
#include "Node.h"
#include "Node.cpp"


template <class T>
class BST
{public:

	Node<T>* root;
	int tree_size;

public:
	void insert(T value);
	bool find(T value);
	int treesize();
	bool remove(T value);

	BST<T>();
};

