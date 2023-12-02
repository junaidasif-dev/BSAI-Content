#include<iostream>
#include<math.h>
using namespace std;
char tree[15];
void SetRoot(char val)
{
	if(tree[0]=='\0')
	{
		tree[0]=val;
	}
	else
	{
		cout<<"Root already exist."<<endl;
	}
}
int SearchNode(char val)
{
	int index=-1;
	for(int i=0;i<15;i++)
	{
		if(tree[i]==val)
		{
			index=i;
			break;
		}	
	}
	return index;
}
void SetLeftChild(char prnt, char val)
{
	int index=SearchNode(prnt);
	if(index==-1)
	{
		cout<<"Parent element is not existed in the list."<<endl;
	}
	else
	{
		tree[(2*index)+1]=val;
	}
}
void SetRightChild(char prnt, char val)
{
	int index=SearchNode(prnt);
	if(index==-1)
	{
		cout<<"Parent element is not existed in the list."<<endl;
	}
	else
	{
		tree[(2*index)+2]=val;
	}
}
void PrintTree()
{
	cout<<"Elements in tree are:"<<endl;
	for(int i=0;i<15;i++)
	{
		if(tree[i]!='\0')
		{
			cout<<tree[i];
		}
		else
		{
			cout<<"-";
		}
	}
}
int main()
{
	SetRoot('m');
	SetLeftChild('m', 'o');
	SetRightChild('o', 's');
	PrintTree();
}
