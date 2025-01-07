/*Take positive integer input and tell if it
is even or odd*/
#include<stdio.h> 
int main(){ 
int a;
printf("entre the intigers");
scanf("%d",&a);
if(a%2==0)
{
    printf("integer is even");
}
    else{
        printf("intiger is odd");
    }
    return 0;

}