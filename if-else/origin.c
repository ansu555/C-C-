/*Given a point (x, y), write a program to find
out if it lies on the x-axis, y-axis or at the origin, viz.
(0, 0)*/

#include<stdio.h> 
int main(){ 
int x,y;
printf("enter the x and y axis : ");
scanf("%d %d",&x,&y);
if(x==0 & y==0)
{
    printf("point is at origin");
}
    else if(x==0)
    {
        printf("point is at y axis");
    }
        else
        {
            printf("point is at x axis");
        }
    
    return 0;

}