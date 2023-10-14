#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d%d%d",&a,&b,&c);
    d=2*a*b*c*512;
    e=d/1024;
    printf("%d KB",e);
}