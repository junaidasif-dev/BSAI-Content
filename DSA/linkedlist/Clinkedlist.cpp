#include <iostream>
#include "Clinkedlist.h"
using namespace std;
int main()
{
	double value;
	double existing;
	char con;
	int choice;
	Clinkedlist list;
	do
	{
		
		cout<<"\tPress 1 for insert at head"<<endl;
		cout<<"\tPress 2 for insert at last"<<endl;
		cout<<"\tPress 3 for insert after"<<endl;
		cout<<"\tPress 4 for insert before"<<endl;
		cout<<"\tPress 5 for delete from head"<<endl;
		cout<<"\tPress 6 for delete from specific node"<<endl;
		cout<<"\tPress 7 for traverse node"<<endl;
		cout<<"Enter choice: ";
		cin>>choice;
		switch (choice)
		{
			case 1:
			cout<<"Enter value to insert at head: ";
			cin>>value;
			list.insertathead(value);
			break;
	     case 2:
			cout<<"Enter value to insert at tail: ";
			cin>>value;
			list.insertatlast(value);
		    break;
		case 3:
			cout<<"Enter value to insert after: ";
			cin>>existing;
			cin>>value;
			list.insertafter(existing,value);
		     break;
	    case 4:
			cout<<"Enter value to insert before: ";
			cin>>existing;
			cin>>value;
			list.insertbefore(existing,value);
		    break;
		case 5:		
			list.deletefromhead();
		    break;
		case 6:	
			cout<<"Enter value for specific node deletion: ";
			cin>>value;
			list.deletespecific(value);
			break;	
		case 7:	
			list.traverselist();
		    break;    
		default:
			cout<<"Sorry! Wrong choise"<<endl;
			break;
		}
		cout<<"\nPress (y) for again continue the program and press any key except (y) for exit: ";
		cin>>con;
		
	}
	while(con == 'y');
}
