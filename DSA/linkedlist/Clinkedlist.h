#include"Cnode.h"
#include<iostream>
using namespace std;

class CLinkedList
{
	private:
		Cnode* Head;
	public:
	    CLinkedList()
		{
			Head = 0;
		}
		
		void Insert_At_Head( double value )
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
	
		void Insert_At_Last( double value )
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
		
		void Insert_After( double existing , double value )
		{

	          if ( Head == 0) 
        	 {
		       cout<<" List is empty ! "<<endl;
        	 }
	
	       
	        else
	           {
		            Cnode *current= Head;
		            while (current!=0 && current->data!=existing)
		                 {
			                current = current->next;  
		                }
		            if(current==0)
		             {
			              cout<<" Existing value is not in the list: "<<endl;
		             }
		            else
		              {
		                 	Cnode *newNode = new Cnode(value);
			                newNode->next = current->next;
			                current->next = newNode;
		              }
	           }
        }
        
        void Insert_Before( double existing , double value )
        {
        	 if( Head == 0) 
               {
   	             cout<<" list is empty! "<<endl;
               }
   
             else if(existing == Head->data)
               {
                 Insert_At_Head(value);
               }
   
             else
               {
   	             Cnode *prev=0;
   	             Cnode *current=Head;
   	             while (current!=0 && current->data!= existing)
   	              {
   	             	prev=current;
   		            current=current->next;
	              }
	         if(current==0)
	           {
		         cout<<" Existing value is not in the list "<<endl;
	           }
	         else
	           {
		         Cnode *newNode=new Cnode(value);
		         newNode->next=current;
		         prev->next=newNode;
	           }
            }
		}
	
	
	void Delete_From_Head()
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
	
	void Delete_Spacific( double existing )
	{
		if ( Head == 0 )
		{
			cout<<" List is empty. "<<endl;
		}
		else if ( existing == Head->data)
		{
			Delete_From_Head();
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
	
	void Traverse_List()
	{
		if ( Head == 0 )
		{
			cout<<" List is empty. "<<endl;
		}
		else
		{
			Cnode* current = Head;
			cout<<" Values are: "<<endl;
			do
			{
				cout<<current->data<<endl;
				current = current->next;
			}
			while( current!= Head );
		}
	}	
			
};
