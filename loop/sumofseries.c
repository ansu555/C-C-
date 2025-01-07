//print the sum of series : (1-2+3-4+5-6+7-8 . . . . upto n)
 #include<stdio.h> 
 int main(){ 
 int n ;
 int sum=0;
printf("Enter a number:");    
scanf("%d",&n);
 for(int i=1;i<=n;i++)
 {
    if (i%2!=0)
    {
        sum=sum+i;
    }
    else
    {
        sum=sum-i;
    }
 }
    printf("sum is %d",sum);
    return 0;
 
 }