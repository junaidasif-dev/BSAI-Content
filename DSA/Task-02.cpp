#include<iostream>
using namespace std;
int main()
{
	//Linear Search
    int size;
    int NumtoFind;
    bool flag = false;
    cout<<"Enter the size of an array: ";
    cin>>size;
    int start = 0;
    int end=size;
    int array[size];
    cout<<"Enter the values in an array: ";
    for(int i=0;i<size;i++)
    {
        cout<<"\nEnter value "<<i+1<<": ";
        cin>>array[i];
    }
    cout<<"Enter the number you want to find in array: ";
    cin>>NumtoFind;
    while(start <= end){
           if(array[start] == NumtoFind){
            flag =true;
            break;
           }
           else{
            start++;
           }
    }
    if(flag)
    {
        cout<<NumtoFind<<" is founded in an array!";
    }
    else{
        cout<<NumtoFind<<" is not found in an array!";
    }
} 
