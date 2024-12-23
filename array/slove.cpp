#include<iostream>
using namespace std;

void update(int arr[], int size)
{
    cout<<"initalizing"<<endl;
    arr[1]=20;
    for(int i=0; i<3;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"back to main"<<endl;
}

int main()
{
    cout<<endl;
    int arr[3]={1,2,3};
    update(arr,3);
    cout<<"into the main function"<<endl;
     for(int i=0; i<3;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
