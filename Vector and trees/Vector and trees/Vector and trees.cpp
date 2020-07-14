
#include <iostream>
#include "Vector.h"
#include "Vector.cpp"
#include "BST.h"
#include "BST.cpp"

using namespace std;
int main()
{


	Vector<int> v1;
	v1.push_back(4);
	v1.push_back(5);
	v1.push_back(7);

	cout <<v1.back()<<endl ;
	v1.pop_back();

	cout << v1.back()<<endl;

	cout <<v1[0]<<endl ;

	v1[0] = 100;
	cout << v1[0] << endl;

	BST<int> T;
	T.insert(1);
	T.insert(2);
	T.insert(3);
	T.insert(4);
	T.insert(-2);
	T.insert(0);
	T.insert(5);
	T.insert(6);
	T.insert(7);
	T.insert(-1);

	T.remove(7);
	cout << T.treesize()<<endl;
	T.remove(6);
	cout << T.treesize() << endl;
	T.remove(5);
	cout << T.treesize() << endl;
	T.remove(4);
	cout << T.treesize() << endl;
	T.remove(3);
	cout << T.treesize() << endl;
	T.remove(2);
	cout << T.treesize() << endl;
	T.remove(1);
	cout << T.treesize() << endl;
	T.remove(20);
	cout << T.treesize() <<' ' <<T.remove(6)<< endl;
	T.remove(-2);
	cout << T.treesize() <<' ' <<T.remove(7) << endl;
	T.remove(-1);
	cout << T.treesize() << ' ' << T.remove(5) << endl;
	T.remove(0);
	cout << T.treesize() <<' ' <<T.remove(1)<< endl;






	return 0;
}
