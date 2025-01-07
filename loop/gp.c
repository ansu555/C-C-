/*display this gp 1,2,4,8,16,32, . . . . upto 'n' terms*/

#include<stdio.h> 
int main(){ 
   int n;
   int a=1;
   printf("Enter thE nth term : ");
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {
       a=a*2;
       printf("%d ",a);
   }
    
    return 0;

}