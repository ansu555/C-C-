/*If cost price and selling price of an item is
input through the keyboard, write a program to
determine whether the seller has made profit or
incurred loss. Also determine how much profit he
made or loss he incurred.*/
#include<stdio.h> 
int main(){ 

    int c,s;
    printf("enter the cost price : ");
    scanf("%d",&c);
    printf("enter the selling price : ");
    scanf("%d",&s);
    if(c>s)
    {
        printf("loss");
    }
    else if(c<s)
    {
        printf("profit");
    }
    return 0;

}