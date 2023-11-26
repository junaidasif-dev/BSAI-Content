#include<iostream>
using namespace std;

class Cnode
{
	public:
		double data;
		Cnode* next;
		Cnode(double i=0, Cnode* n=0)
		{
			data = i;
			next = n;
		}
};
