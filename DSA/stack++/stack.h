#include<iostream>
using namespace std;
class IntStack //class
{
	private:
		int *StackArray;
		int StackSize;
		int top;
	public:
		IntStack(int size) //constructor
		{
			StackArray = new int(size); //int[size];
			StackSize = size;
			top = -1;
		}
		~IntStack() //destructor
		{
			delete []StackArray;
		}
		bool IsFull() //if stack is full
		{
			if(top == StackSize-1)
				return true;
			else
				return false;	
		}
		bool IsEmpty() //if stack is empty
		{
			if(top == -1)
				return true;
			else
				return false;
		}
		void Push(int value) //if user want to push the value in stack
		{
			if(IsFull())
			{
				cout<<"\nStack is overflow.";
			}
			else
			{
				top++;
				StackArray[top] = value;
			}
		}
		void Pop() //if user want to pop the value from stack
		{
			if(IsEmpty())
			{
				cout<<"\nStack is underflow.";
			}
			else
			{
				cout<<endl<<StackArray[top]<<" Value is pop out from stack.";
				top--;
			}
		}
		void Display() //if user want to display the values of stack
		{
			if(IsEmpty())
			{
				cout<<"\nStack is underflow.";
			}
			else
			{
				for(int i=top;i>=0;i--)
				{
					cout<<endl<<StackArray[i];
				}
			}
		}
};
