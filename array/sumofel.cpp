#include<iostream>
using namespace std;

int sumofarray(int array[], int size) 
{
    int sum=0;
    //for elements in array
     for(int i=0;i<size;i++)
    {
        cout <<"enter the element "<< i <<" of an array : "; 
        cin >> array[i];
    }
    //for sum of elements in array
    for(int i=0;i<size;i++)
    {
       sum=sum + array[i];
    }
    return sum;
}
int main()
{
    int sizeofarray;
    int arr[sizeofarray];

    cout<<"enter the size of array : ";
    cin >> sizeofarray;
    cout<<endl;
    //sum of array
    int sum= sumofarray(arr,sizeofarray);

    cout<<"sum of array : "<<sum<<endl;

return 0;
}