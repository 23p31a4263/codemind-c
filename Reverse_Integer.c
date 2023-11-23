#include<stdio.h>
int main()
{
    int i,n,m=0,r;
    scanf("%d",&n);
    for(i=1;n!=0;i++)
    {
        r=n%10;
        m=m*10+r;
        n=n/10;
    }
    printf("%d",m);
    
}