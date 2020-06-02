#include<iostream.h>
#include"BTNode.h"
#include"BTNodeLib.h"
#include"Vector.h"

int main()
{
//二叉树由顺序存储转化为链式存储	
	char a[15]={'A','B','C','\0','D','\0','E','\0','\0','F'};	//结点的完全层次序列
	Vector<char> L;
	for(int i=0;i<10;i++)
		L.Push_back(a[i]);
    BTNode<char>* at=MakeLinked(L);
//层次遍历
	cout<<"对所创建的二叉树进行前序遍历:  ";
	Preorder(at);		
	cout<<endl;

	cout<<"对所创建的二叉树进行中序遍历:  ";
	Inorder(at);		
	cout<<endl;

	cout<<"对所创建的二叉树进行后序遍历:  ";
	Postorder(at);		
	cout<<endl;

	cout<<"叶子结点的个数为："<<GetLeaves(at)<<endl;

//	int s;
	Leaf(at);
	cout<<"叶子结点的个数为："<<s<<endl;


	return 0;
	
}

