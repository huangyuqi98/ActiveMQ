#include<iostream.h>
#include"BTNode.h"
#include"BTNodeLib.h"
#include"Vector.h"

int main()
{
//��������˳��洢ת��Ϊ��ʽ�洢	
	char a[15]={'A','B','C','\0','D','\0','E','\0','\0','F'};	//������ȫ�������
	Vector<char> L;
	for(int i=0;i<10;i++)
		L.Push_back(a[i]);
    BTNode<char>* at=MakeLinked(L);
//��α���
	cout<<"���������Ķ���������ǰ�����:  ";
	Preorder(at);		
	cout<<endl;

	cout<<"���������Ķ����������������:  ";
	Inorder(at);		
	cout<<endl;

	cout<<"���������Ķ��������к������:  ";
	Postorder(at);		
	cout<<endl;

	cout<<"Ҷ�ӽ��ĸ���Ϊ��"<<GetLeaves(at)<<endl;

//	int s;
	Leaf(at);
	cout<<"Ҷ�ӽ��ĸ���Ϊ��"<<s<<endl;


	return 0;
	
}

