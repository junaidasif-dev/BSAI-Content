#include<iostream>
using namespace std;
int main()
{
    //Binary Search while numbers in an array are present in ascending order
    int size;
    int NumtoFind;
    bool flag = false;
    cout<<"Enter the size of an array: ";
    cin>>size;
    int start = 0;
    int end=size;
    int mid;
    int array[size];
    cout<<"Enter the values of an array: ";
    for(int i=0;i<size;i++)
    {
        cout<<"\nEnter value "<<i+1<<": ";
        cin>>array[i];
    }
    cout<<"Enter the number you want to find in an array: ";
    cin>>NumtoFind;
    while(start <= end){
        mid = (start+end)/2;
           if(array[mid] == NumtoFind){
            flag = true;
            break;
           }
           if (array[mid]<NumtoFind)
           {
             start=mid+1;
           }
           if (array[mid]>NumtoFind)
           {
             end=mid-1;
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
