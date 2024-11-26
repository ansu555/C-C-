#include<iostream>
using namespace std;

//reverse function
void reversearrays(int array[], int size)

{
    int end=size-1;
 for(int i=0; i<=end; i++)
 {
    swap(array[i], array[end]);
    end--;
 }

 for(int i=0;i<size;i++)
 {
    cout<<array[i]<<" ";
 }
 cout<<endl;
}

//main function
int main()
{
    int size;
 int arr[]={1,2,3,4,5,6,7};
 int brr[]={1,2,3,4,5,6};
 int sizearr=sizeof(arr)/sizeof(arr[0]);
 int sizebrr=sizeof(brr)/sizeof(brr[0]);
 reversearrays(arr,sizearr);
 reversearrays(brr,sizebrr);
return 0;
}