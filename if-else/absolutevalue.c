/*Take integer input and print the
absolute value of that integer*/

#include<stdio.h> 
int main(){ 
 int i;
 printf("Enter an Integer: ");
 scanf("%d",&i);
 if(i>0)
 {
    printf("\nAbsolute Value = %d",i );
 }
 else
 {
    i=1*(-i);
    printf("\nAbsolute Value =%d ",i);
 }
    return 0;
}