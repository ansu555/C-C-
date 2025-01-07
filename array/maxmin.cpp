#include<iostream>
using namespace std;

//maximum of the array
int max(int array[],int size);

//minimum of the array
int min(int arr[],int size);

//main function 
int main()
{
    int sizeofarray,element;
    cout<<"enter the length of the array : ";
    cin >> sizeofarray;
    int arr[sizeofarray];

    //loop for enter the elements of the array

    for(int i=0; i<sizeofarray; i++)
    {
    cout << "enter the " << i << " elements of the array : ";
       cin >> arr[i];
    }

    //for maxiimum element
    int maixelement = max(arr,sizeofarray);
    cout<<"maximum element of the array is : "<< maixelement <<endl;

    //for minimum element
    int minimumelement = min(arr,sizeofarray);
    cout<<"minimum element of the array is : "<< minimumelement <<endl;
return 0;
}

//maximum of the array

int max(int array[],int size)
{
    int max=array[0];
    for(int i=1; i<size; i++)
    {
        if(array[i]>max)
        {
            max=array[i];
        }
    }
    return max;
}

//minimum of the arrray

int min(int arr[],int size)
{
    int min=arr[0];
    for(int i=1; i<size; i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;
}

