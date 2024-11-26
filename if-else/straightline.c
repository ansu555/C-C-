/*Given three points (x1, y1), (x2, y2) and
(x3, y3), write a program to check if all the three
points fall on one straight line.*/

/*accordind maths, first we ne to define sloves of (AB) then (BC) if slove of (AB) and slove of (BC) are equal
then we say three points fall on one straight line .
formula of slove is = (A2-A1)/(B2-B1)*/

#include<stdio.h> 
int main(){ 
 
 /*he double in C is a data type that is used to store high-precision
  floating-point data or numbers (up to 15 to 17 digits)*/
 double x1,y1,x2,y2,x3,y3;
 printf("enter the number of x1 , x2 , x3 : \n");
 scanf("%d\n%d\n%d\n",&x1,&x2,&x3);
 printf("enter the number of y1 , y2 , y3 : \n");
 scanf("%d\n%d\n%d\n",&y1,&y2,&y3);
    int m1,m2;
    m1=(y2-y1)/(x2-x1);
    
    m2=(y3-y2)/(x3-x2);

    if(m1==m2)
    {
        printf("all the thre points fall on one straight line");
    }
    else
    {
        printf("not in straight line");
    }
    return 0;

}