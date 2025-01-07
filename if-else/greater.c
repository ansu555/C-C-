/*Take 3 positive integers input and print
the greatest of them.*/
#include<stdio.h> 
int main(){ 

   int a,b,c ;
   printf("Enter three numbers: ");
   scanf("%d %d %d",&a,&b,&c);
 if(a>b && a>c)
{
   printf("\n%d is the largest number",a );
} 
else if(b>c && b>a)
{
 printf("\n%d is the largest number",b);
}
else
{
   printf("\n%d is the largest number", c);
}
   return 0;
}
