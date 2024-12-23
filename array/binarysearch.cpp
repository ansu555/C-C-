#include<iostream>
using namespace std;
int binarysearch(int arr[] , int size , int key)
{
    int start = 0;
    int end = size-1;
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        if(arr[mid]==key){return mid;}
        if(arr[mid]<key){start=mid+1l;}
        else{end=mid-1;}
        mid=start+(end-start)/2;
    }
    return -1;
}

int main() 
{ 
    //key for odd
    int keyodd;
    cout<<"enter the key of odd : ";
    cin>>keyodd;
    //key for even
     int keyeven;
    cout<<"enter the key of even : ";
    cin>>keyeven;

    int sizeodd;
    int sizeeven;
    int arrodd[]={1,3,7,9,11,25,44};
    int arreven[]={1,2,5,6,7,9};
    //size of odd array
 sizeodd=sizeof(arrodd)/sizeof(arrodd[0]);
 //size of even array
 sizeeven=sizeof(arreven)/sizeof(arreven[0]);
//fuction calling
int oddindex=binarysearch(arrodd,sizeodd,keyodd);
cout<<"index of "<<keyodd<<" is : "<<oddindex<<endl;

int evenindex=binarysearch(arreven,sizeeven,keyeven); 
cout<<"index of "<<keyeven<<" is : "<<evenindex;


return 0;
}