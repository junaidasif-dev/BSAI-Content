#include <iostream>
#include "linkedlist.h"
using namespace std;
int main()
{
	linkedlist list;
	list.insertattail(14);
	list.insertathead(5);
	list.insertathead(26);
	list.insertafter(26,9);
	list.insertbefore(5,12);
	list.traverselist();
	return 0;
}
