/*
HW : Write a program to print out all Armstrong
numbers between 1 and 500. If sum of cubes of
each digit of the number is equal to the number
itself, then the number is called an Armstrong
number. For example, 153 = (1 * 1 * 1) + ( 5 * 5 * 5)+
3 * 3 * 3
*/
#include<stdio.h> 
int main(){ 
    int r,arm;
    int i,c;
for (i=1;i<=500;i++)
  {
    arm=0;
    c=i;
while(c>0)
    {
    r=i%10;
    arm=(r*r*r)+arm;
    i=i/10;
    }
    if(c==arm)
    {
        printf("%d\n",c);
    }
  }


return 0;

}