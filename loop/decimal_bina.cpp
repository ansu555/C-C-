#include<iostream>
#include<cmath>
using namespace std;
int main()
{
 int n;
 int a=0;
 cout<<" enter the number : ";
 cin>>n;
 cout<<endl;

int i=0;
while(n!=0){
   int bit = n & 1;
   a = (bit * pow(10,i)) + a;
   n =n >>1;
   i++;
}
cout << " "<< a ;
return 0;
}