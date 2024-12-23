/*Any year is input through the keyboard. Write
a program to determine whether the year is a leap
year or not. (Considering leap year occurs after
every 4 years)*/
#include<stdio.h> 
int main(){ 
int year;
printf("enter the year");
scanf("%d",&year);
    if((year%4==0 && year%100!=0 ) || (year%400==0))
    {
        printf("%d in leadyear",year);
    }
    else{
        printf("%d is not leapyear",year);
    }
    return 0;

}