//swap

#include<stdio.h>
void swap(int*a,int*b);
int main()
{
    int x = 3;
    int y = 5;
    swap(&x,&y);
    printf("\n a is %d and b is %d",x,y);
return 0;
}
void swap(int*a,int*b)
{
    int temp= *a;
    *a=*b;
    *b= temp;
    printf("\n a is %d and b is %d",*a,*b);
}