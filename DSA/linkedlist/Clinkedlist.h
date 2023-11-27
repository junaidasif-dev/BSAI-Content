#include"Cnode.h"
#include<iostream>
using namespace std;

class Clinkedlist
{
	private:
		Cnode* Head;
	public:
	    CLinkedList()
		{
			Head = 0;
		}
		
		void insertathead( double value )
		{
			Cnode* newNode = new Cnode( value );
			if ( Head == 0 )
			{
				Head = newNode;
				newNode->next = Head;
			}
			
			else
			{
				Cnode* current = Head;
				while ( current->next!= Head )
				{
					current = current->next;
				} 
				 
				 Head = newNode;
				 current->next = newNode;
			}
		}
	
		void insertatlast( double value )
		{
			Cnode* newNode = new Cnode( value );
			if ( Head == 0 )
			{
				Head = newNode;
				newNode->next = Head;
			}
			
			else
			{
				Cnode* current = Head;
				while ( current->next!= Head )
				{
					current = current->next;
				}
				newNode->next = current->next;
				current->next = newNode;
			}
		}
		
		void insertafter( double existing , double value )
{
		if(Head == 0)
		{
			cout<<"\nList is empty.";
		}
		else
		{
			Cnode* currnode = Head;
			while(currnode != 0 && currnode->data != existing)
			{
				currnode = currnode->next;
			}
			if(currnode==0)
			{
				cout<<"\nInsertion is not possible in the list because existing element in not present in the list.";
			}
			else
			{
				Cnode* newnode = new Cnode(value);
				newnode->next = currnode->next;
				currnode->next = newnode;
			}
		}
	}
        
    void insertbefore( double existing , double value )
    {
		if(Head == 0)
		{
			cout<<"\nList is empty.";
		}
		else if(existing == Head->data)
		{
			insertathead(value);
		}
		else
		{
			Cnode* prevnode = 0;
			Cnode* currnode = Head;
			while(currnode != 0 && currnode->data != existing)
			{
				prevnode = currnode;
				currnode = currnode->next;
			}
			if(currnode==0)
			{
				cout<<"\nInsertion is not possible in the list because existing element in not present in the list.";
			}
			else
			{
				Cnode* newnode = new Cnode(value);
				newnode->next = currnode;    	   // newnode = currnode
				prevnode->next = newnode;          // currnode->next = currnode
			}
		}
	}
	
	void deletefromhead()
	{
		if ( Head == 0 )
		{
			cout<<" List is empty. "<<endl;
		}
		
		else
		{
			Cnode* delNode = Head;
			Cnode* current = Head;
			while( current->next!= Head )
			{
				current = current->next;
			}
			current->next = Head->next;
			Head = Head->next;
			delNode->next = 0;
			delete delNode;
		}
	}
	
	void deletespecific( double existing )
	{
		if ( Head == 0 )
		{
			cout<<" List is empty. "<<endl;
		}
		else if ( existing == Head->data)
		{
			deletefromhead();
		}
		else
		{
			Cnode* current = Head->next;
			Cnode* prev = Head;
			while ( current!=Head && current->data!=existing)
			{
				prev = current;
				current = current->next;	
			}
			if ( current == Head )
			{
				cout<<" value not existing. "<<endl;
			}
			else
			{
				prev->next = current->next;
				current->next = 0;
				delete current;
			}
		}
	}
	
	void traverselist()
	{
		if(Head == 0)
		{
			cout<<"\nList is empty.";
		}
		else
		{
			cout<<"\nValues in list are: "<<endl;
			Cnode* currnode = Head;
			while(currnode != Head)
			{
				cout<<currnode->data<<endl;
				currnode = currnode->next;
			}
		}
	}			
};
