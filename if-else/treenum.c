/*Take positive integer input and tell if it
is a three digit number or not.*/
#include<stdio.h> 
int main(){ 
   int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    if(num>0 && num >99 && num <1000)
    {
        printf("\n%d is a  three digit number",num );
    }    
    else{
        printf("\n %d is NOT a three digit number ",num);
    }
    return 0;
}