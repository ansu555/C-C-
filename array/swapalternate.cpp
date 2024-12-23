#include<iostream>
using namespace std;
void swapalternates(int arr[] , int size)
{
  if(size%2==0)
  {
    for(int i=0; i<=size-1; i=i+2)
  {
    swap(arr[i], arr[i+1]);
  }
  }
  else
  {
    for(int i=0; i<size-2; i=i+2)
  {
    swap(arr[i], arr[i+1]);
  }
  }
  
  for(int  i=0;i<size; i++)
  {
    cout<<arr[i]<<" ";
  }
}
int main()
{
 int sizeofarray;
 cout<<"enter the size of array : ";
 cin >> sizeofarray;
  int arr[sizeofarray];
 cout<<endl;
 for(int i=0;i<sizeofarray;i++)
 {
    cout<< "enter the element of "<< i << " is : " ;
    cin >> arr[i];
 }
 cout<<endl;
 swapalternates(arr,sizeofarray);

return 0;
}