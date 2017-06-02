// shujujiegou_work_05_27.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
template<class T>
class BinaryTree<T>
{
	int Get_num_onedegree(BinTreeNode<T>*subtree);
};
template<class T>
int BinaryTree<T>:: Get_num_onedegree(BinTreeNode<T>*subtree)
{
	if (subtree == 0)
	{
		return NULL;
	}
	if (subtree->leftchild == 0 && subtree->rightchild != 0)
	{
		return 1 + Get_num_onedegree(subtree->rightchild);
	}
	if (subtree->rightchild == 0 && subtree->leftchild != 0)
	{
		return 1 + Get_num_onedegree(subtree->leftchild);
	}
	else
	{
		return Get_num_onedegree(subtree->rightchild)+ Get_num_onedegree(subtree->leftchild);
	}
}

