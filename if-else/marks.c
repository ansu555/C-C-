/*
Take input percentage of a student and
print the Grade according to marks:
1) 90-100 Excellent
2) 80-90 Very Good
3) 70-80 Good
4) 60-70 Can do better
5) 50-60 Average
6) 40-50 Below Average
7) <40 Fail
*/

 #include<stdio.h> 
 int main(){ 
 int marks;
 printf("enter the marks : ");
 scanf("%d",&marks);
 if(marks>91 && marks<100)
{
    printf("excellent");
}
    else if(marks>81 && marks<90)
    {
        printf("very good");
    }
    else if(marks>71 && marks<80)
    {
        printf("good");
    }
    else if(marks>61 && marks<70)
    {
        printf("can do better");
    }
    else if(marks>51 && marks<60)
    {
        printf("average");
    }
    else{
        printf("fail");
    }
    return 0;
 
 }