//percentage of 5 sub

#include<stdio.h> 
int main(){ 
    int m,p,c,b,e;
    printf("marks of math : ");
    scanf("%d",&m);
    printf("marks of phy : ");
    scanf("%d",&p);
    printf("marks of chem : ");
    scanf("%d",&c);
    printf("marks of bio : ");
    scanf("%d",&b);
    printf("marks of eng : ");
    scanf("%d",&e);
    float t=(m+p+c+b+e)/5;
    printf("percentage of 5 sub is : %f",t);
    
    
    return 0;

}