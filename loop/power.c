/*Ques : Two numbers are entered through the
 keyboard. Write a program to find the value of one
 number raised to the power of another.*/

 #include<stdio.h> 
 int main(){ 
 
    int a,b;    
printf("Enter a number a:");    
scanf("%d",&a);
   printf("Enter a number b:");    
scanf("%d",&b);
int pow =1;
 for(int i=1;i<=b;i++)
 {
   pow=a*pow;
 }
 printf("is %d",pow);
    return 0;
 
 }