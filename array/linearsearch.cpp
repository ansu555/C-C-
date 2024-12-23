#include<iostream>
using namespace std;
//linear search
bool search(int arr[], int size, int key)
{
 for(int i=0;i<size;i++)
 {
    if(arr[i] == key)
    {
        return 1;
    }
 }
 return 0;
}

//main function
int main()
{
int arr[10]={5,7,-2,101,22,0,5,202,1,9};
int key;
cout<<"enter the element to search for(key) : ";
cin >> key;
bool found=search(arr, 10,key);
if(found==1)//check that found varialble is true or false
{
    cout<<"found"<<endl;
}
else{
 cout<<"not-found"<<endl;
}

return 0;
}