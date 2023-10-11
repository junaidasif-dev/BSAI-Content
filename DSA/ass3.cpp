#include<iostream>
using namespace std;
int size;
//int arr[size];
void bubble()
	{
		int arr[size];
		for(int i = 0; i<size-1; i++)
	{
		for(int j=0; j<size-i-1; j++)
		{
			if(arr[j]>arr[j+1])
				{
					int temp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = temp;
					
				}
		}
	}
	cout<<"The sorted array is as follows: "<<endl;
	for(int i=0; i<size; i++)
		{
			cout<<arr[i]<<endl;
		}
	}
int main()
{
	int arr[size];
	cout<<"Enter size of an array: ";
	cin>>size;
	cout<<"Enter values in an array"<<endl;
	for(int i=0; i<size; i++)
	{
		cout<<"Enter valuse: ";
		cin>>arr[i];
	}
	char choice;
	cout<<"Do you want to sort the array or do you want to find a number?\nIf you want to sort the array, then press (s) and if you want to find a number, then press (f): ";
	cin>>choice;
	if(choice == 's')
		{
			char schoice;
			cout<<"Please choose sorting method\nPress (b) for bubble sorting, (s) for selection sorting, or (i) for insertion sorting: ";
			cin>>schoice;
			if(schoice == 'b')
			{
				bubble();	
			}
		}
}
