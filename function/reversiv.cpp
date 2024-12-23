#include<iostream>
#include<math.h>
using namespace std;
//compliment function
int calculate_ones(int n)
{
 return ~n;
}
//binary function
int binary(int n)
{
    int ans=0;
        int digit;
        while(n!=0)
        {
            digit = n % 2;
            ans=(digit * 10)+ans;
        }
    return ans;
}
//decimal function
int decimal(int n)
{
    int digit;
    int ans=0;
    int i=0;
    while(n!=0)
    {
        digit= n % 10;
        if(digit==1)
        {
            ans= ans+pow(2,i);
        }
        n= n / 10;
        i++;
    }
    return ans;
}
//main function
int main()
{
    int n;
        cout<<"ones compliment is : "<<endl;
        int complement=calculate_ones( binary(n) );
        cout << complement << endl;
        cout<<"decimal representation of Ones Complement: ";
        int deci= decimal(binary(n));
        cout<<deci<<endl;
return 0;
}