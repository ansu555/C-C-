//wap to print reverse of a given number
#include<stdio.h> 
int main(){ 
int n,r=0;
printf("ENTER the number : ");
scanf("%d",&n);
 while (n>0)
 {
   r=r*10;
   r=r+(n%10);
   n=n/10;
 }

printf("reverse is : %d",r);
    
    return 0;

}