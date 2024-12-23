#include<iostream>
using namespace std;
int main()
{
    int n;
  int num[15];
  cout<< "value at 14 index : "<< num[14] << endl;
  int second[3] = {5,7,11};
  cout<< "value at 2 is : "<< second[2] << endl;

  int trird[15]={2,7};
  //print array
  n=15;
  for(int i=0;i<n;i++)
  {
    cout<<trird[i]<<" ";;
  }
  cout<<endl;
  //experimenntal
  int arr[10] = {2};
  n=40;
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  //initialize one
  int size=8;
  int initiaze_value=4;
  int arcr[size];
   for(int i=0;i<size;i++)
  {
    arcr[i]={initiaze_value};
    cout<<arcr[i]<<" ";
  }
  cout<<endl;
return 0;
}