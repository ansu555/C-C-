/*display this ap 100,97,94, . . . . . upto all terms which are posetive*/
#include<stdio.h> 
int main(){ 
int a=100;
for(int i=1;a>=0;i++)
{
    printf("%d ",a);
    a=a-3;
}    
    return 0;

}