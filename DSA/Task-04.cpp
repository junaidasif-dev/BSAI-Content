#include<iostream>
using namespace std;
int main()
{
	//BUBBLE SORTING
	int size;
	cout<<"Enter the size of array :"<<endl;
	cin>>size;
	int arr[size];
	cout<<"Enter "<<size<<" values in an array :"<<endl;
	for(int i=0 ;i< size ; i++){
		cin>>arr[i];
	}
  for(int i=0 ;i<size-1 ;i++){
	for(int j=0 ; j<size-1-i ; j++)
	
 {  if(arr[j]>arr[j+1])
   {
   int temp=arr[j];
	arr[j]=arr[j+1];
	arr[j+1]=temp;
   }
 }
}
cout<<"Sorted array is as follows...."<<endl;
for(int i=0 ; i<size ; i++){
	cout<<arr[i]<<endl;
 }
}
