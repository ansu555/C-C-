//print the nth fibonacci number
#include<stdio.h> 
int main(){ 
    int n;
    int a=1;
    int b=1;
    int sum= 0;
printf("ENTER the number : ");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
  sum=a+b;
  a=b;
  b=sum;
  printf("%d st fibonacci number is %d \n",i,sum);
}
    
    return 0;

}
