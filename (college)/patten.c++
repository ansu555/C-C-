#include<iostream>
using namespace std;
int main()
{
int row;
cout<<"enter the row number : ";
cin>>row;
for(int i=1;i<=row;i++)
{
    for(int j=1;j<=row;j++)
    {
    
       int e=j;
       cout<<" "<<e;
    }
    cout<<endl;
}

return 0;
}