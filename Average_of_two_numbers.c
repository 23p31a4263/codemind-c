#include<stdio.h>
int main()
{
    int Num1,Num2;
    float ave;
    scanf("%d%d",&Num1,&Num2);
    ave=(Num1+Num2)/2.0;
    printf("Average of %d and %d is: %.2f",Num1,Num2,ave);
}