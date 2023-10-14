#include<stdio.h>
int main()
{
    int a,b,h;
    float d;
    scanf("%d%d%d",&a,&b,&h);
    d=0.5*h*(a+b);
    printf("%.4f",d);
}