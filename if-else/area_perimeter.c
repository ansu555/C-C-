/*Given the length and width of a rectangle,
write a program to find whether the area of the
rectangle is greater than its perimeter.*/
#include<stdio.h> 
int main(){ 
 int length;
 int width;
 printf("Enter Length: ");
 scanf("%d",&length);
 printf("\n Enter Breadth :");
 scanf("%d", &width );
 int area=length*width;
 int perimeter=2*(length+width);
 if(area>perimeter)
 {
    printf ("Area Greater Than Perimiter\n" ) ;
 }
else
{
    printf("perimeter Greater Than Area\n");
}
    return 0;
}