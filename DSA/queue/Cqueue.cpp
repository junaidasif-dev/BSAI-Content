#include<iostream>
#include"cqueue.h"
using namespace std;
int main()
{
	cout<<"*** Queue IMplementation Program ***\n\n";
	int size;
	cout<<"Enter size of Queue\n";
	cin>>size;
	doublecqueue dq(size);
	dq.Enqueue(7.8);
	dq.Enqueue(21.84);
	dq.Enqueue(3.68);
	dq.Enqueue(17.99);
	dq.Enqueue(23.48);
	dq.Display();
	dq.Dequeue();
	dq.Dequeue();
	dq.Display();
	dq.Enqueue(7.8);
	dq.Enqueue(21.84);
	dq.Display();
	dq.Enqueue(1.11);
}
