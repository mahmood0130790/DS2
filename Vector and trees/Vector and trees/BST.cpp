#include "BST.h"
#include <iostream>
using namespace std;
template<class T>
void BST<T>::insert(T value)
{
	Node<T>* node_inair = new Node<T>(value);
	if (root == nullptr) {
		root = node_inair; tree_size++;
	}
	else {
		 Node<T>* temp_node = root;
		 while (true) {
			 
			 if (value > temp_node->node_value)
			 {
				 if (temp_node->right != nullptr)
					 temp_node = temp_node->right;
				 else {
					 temp_node->right = node_inair; tree_size++; break;
				 }

			 }

			 else if (value < temp_node->node_value) {
				 if (temp_node->left != nullptr)
					 temp_node = temp_node->left;
				 else {
					 temp_node->left = node_inair; tree_size++; break;
				 }
			 }
			 else
				 break;
		 }
	}
	
}

template<class T>
bool BST<T>::find(T value)
{
	Node<T>* node_inair = root;
	if (root == nullptr)
		return false;
	else {
		
		while (true) {
			if (value > node_inair->node_value) {
				if (node_inair->right == nullptr)
					return false;
				else
					node_inair = node_inair->right;
			}
			else if (value < node_inair->node_value) {
				if (node_inair->left == nullptr)
					return false;
				else
					node_inair = node_inair->left;
			}
			else
				return true;

		}
	}
}


template<class T>
int BST<T>::treesize()
{
	return tree_size;
}



template<class T>
bool BST<T>::remove(T value)
{
	Node<T>* node_inmid = root; Node<T>* node_inright = root; Node<T>* node_inleft = root; Node<T>* temp=root;
	
	if (root == nullptr)
		return false;
	else {

		while (true) {
			
			if (value > node_inmid->node_value) {
				if (node_inmid->right == nullptr)
					return false;
				else {
					temp = node_inmid;
					node_inmid = node_inmid->right;

				}
			}
			else if (value < node_inmid->node_value) {
				if (node_inmid->left == nullptr)
					return false;
				else {
					temp = node_inmid;
					node_inmid = node_inmid->left;
				}
			}

			
		
			else
			{
				node_inright = node_inmid->right;
				node_inleft = node_inmid->left;
				delete node_inmid; tree_size--;

				if (value > temp->node_value)
				{
					if (node_inright == nullptr && node_inleft != nullptr) {

						temp->right = node_inleft;  return true;
					}
					else if (node_inleft == nullptr && node_inright != nullptr) {
						temp->right = node_inright;
						return true;

					}
					else if (node_inleft == nullptr && node_inright == nullptr)
					{
						temp->right = nullptr; return true;

					}
					else {
						temp->right = node_inright;

						Node<T>* temp_node = node_inright;
						while (true) {

							if (node_inleft->node_value > temp_node->node_value)
							{
								if (temp_node->right != nullptr)
									temp_node = temp_node->right;
								else {
									temp_node->right = node_inleft;  break;
								}

							}

							else if (node_inleft->node_value < temp_node->node_value) {
								if (temp_node->left != nullptr)
									temp_node = temp_node->left;
								else {
									temp_node->left = node_inleft; break;
								}
							}

						}
						return true;
					}
				}



				else if (value < temp->node_value) {
					if (node_inright == nullptr && node_inleft != nullptr) {

						temp->left = node_inleft; return true;
					}
					else if (node_inleft == nullptr && node_inright != nullptr) {
						temp->left = node_inright;
						return true;

					}
					else if (node_inleft == nullptr && node_inright == nullptr)
					{

						temp->left = nullptr; return true;
					}
					else {
						temp->left = node_inright;

						Node<T>* temp_node = node_inright;
						while (true) {

							if (node_inleft->node_value > temp_node->node_value)
							{
								if (temp_node->right != nullptr)
									temp_node = temp_node->right;
								else {
									temp_node->right = node_inleft;  break;
								}

							}

							else if (node_inleft->node_value < temp_node->node_value) {
								if (temp_node->left != nullptr)
									temp_node = temp_node->left;
								else {
									temp_node->left = node_inleft; break;
								}
							}
						}
						return true;
					}

				}



				else {
					if (node_inright == nullptr && node_inleft != nullptr) {

						root = node_inleft;  return true;
					}
					else if (node_inleft == nullptr && node_inright != nullptr) {
						root = node_inright;
						return true;

					}
					else if (node_inleft == nullptr && node_inright == nullptr)
					{
						root = nullptr; return true;

					}
					else {
						root = node_inright;

						Node<T>* temp_node = node_inright;
						while (true) {

							if (node_inleft->node_value > temp_node->node_value)
							{
								if (temp_node->right != nullptr)
									temp_node = temp_node->right;
								else {
									temp_node->right = node_inleft;  break;
								}

							}

							else if (node_inleft->node_value < temp_node->node_value) {
								if (temp_node->left != nullptr)
									temp_node = temp_node->left;
								else {
									temp_node->left = node_inleft; break;
								}
							}

						}
						return true;
					}
				}
			}
			
		}
	}
}






template<class T>
BST<T>::BST()
{
	root = nullptr;
	tree_size = 0;
}
