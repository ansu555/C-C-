/*Display this AP - 1,3,5,7,9.. upto ‘n’
terms.
a,a+d,a+2d,a+3d . . . . . a+(n-1)d
a = first term(in this case a = 1)
d = common difference(in this case d = 2)
a+(n-1)d = 1+(n-1)*2 = 2n-1 = (n)th term
*/

#include<stdio.h> 
int main(){ 
    int n,i;
    printf("enter the n th term : ");
    scanf("%d",&n);

for(i=1;i<=2*n-1;i+=2)
{
    printf("the n'th term is : %d \n",i);
}    
    return 0;
}