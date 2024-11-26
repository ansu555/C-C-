/*Take positive integer input and tell if it
is divisible by 5 or not.*/
#include<stdio.h> 
int main(){ 
int a;
printf("enter the integer :");
scanf("%d",&a);
if(a%5==0)
{
     printf("is divisible");
}
    else{
        printf("is not divisible");
    }
    return 0;

}