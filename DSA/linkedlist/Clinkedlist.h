#include<iostream>
#include"Cnode.h"
using namespace std;
class clinkedlist{
	private:
		cnode* head;
	public:
		clinkedlist()
		{
			head=0;
		}
	void insertathead(double val);
	void insertatlast(double val);
	void insertafter(double existing,double val);
	void insertbefore(double existing,double val);
	void deletehead();
	void deletespecific(double val);
	void traverse();
};
void clinkedlist::insertathead(double val)
{
	cnode* newnode=new cnode(val);
	if(head==0)
	{
		head=newnode;
		newnode->next=head;
	}
	else
	{
		cnode* curr=head;
		newnode->next=head;
		while(curr->next!=head)
		{
			curr=curr->next;
		}
		head=newnode;
		curr->next=newnode;
	}
}
void clinkedlist::insertatlast(double val)
{
	cnode* newnode=new cnode(val);
	if(head==0)
	{
		head=newnode;
		newnode->next=head;
	}
	else
	{
		cnode* curr=head;
		while(curr->next!=head)
		{
			curr=curr->next;
		}
		newnode->next=curr->next;
		curr->next=newnode;
	}
}

void clinkedlist::deletehead()
{
	if(head==0)
	{
		cout<<"List is empty\n";
	}
	else
	{
	cnode* curr=head;
	cnode* delnode=head;
	while(curr->next!=head)
	{
		curr=curr->next;
	}
	curr->next=head->next;
	head=head->next;
	delnode->next=0;
	delete delnode;
   }
}
void clinkedlist::deletespecific(double val)
{
	if(head==0)
	{
		cout<<"List is empty\n";
	}
	else if(val==head->data)
	{
		deletehead();
	}
	else
	{
		cnode* curr=head->next;
		cnode* prev=head;
		while(curr!=head && curr->data!=val)
		{
			prev=curr;
			curr=curr->next;
		}
		if(curr==0)
		{
			cout<<"The value is not in the list\n";
		}
		else
		{
			prev->next=curr->next;
			curr->next=0;
			delete curr;
		}
	}
	
}
void clinkedlist::traverse()
{
	if(head==0)
	{
		cout<<"List is empty\n";
	}
	else
	{
		cnode* curr=head;
		do
		{
			cout<<"\t"<<curr->data<<endl;
			curr=curr->next;
		}
		while(curr!=head);
	}
}
void clinkedlist::insertafter(double key, double newData) {
        if (head == 0) {
            cout << "List is empty. Cannot perform insertion." << std::endl;
            return;
        }

        cnode* temp = head;
        do {
            if (temp->data == key) {
                cnode* newNode = new cnode(newData);
                newNode->next = temp->next;
                temp->next = newNode;
                std::cout << "Node with data " << newData << " inserted after " << key << std::endl;
                return;
            }
            temp = temp->next;
        } while (temp != head);

        cout << "Key not found in the list." << std::endl;
    }
void clinkedlist::insertbefore(double key, double newData) {
        if (head == 0) {
            cout << "List is empty. Cannot perform insertion." << std::endl;
            return;
        }

        cnode* temp = head;
        cnode* prev = 0;
        do {
            if (temp->data == key) {
                cnode* newNode = new cnode(newData);
                if (temp == head) {
                    newNode->next = head;
                    while (temp->next != head) {
                        temp = temp->next;
                    }
                    temp->next = newNode;
                    head = newNode;
                } else {
                    newNode->next = temp;
                    prev->next = newNode;
                }
                std::cout << "Node with data " << newData << " inserted before " << key << std::endl;
                return;
            }
            prev = temp;
            temp = temp->next;
        } while (temp != head);

        std::cout << "Key not found in the list." << std::endl;
    }

