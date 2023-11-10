#include<stdio.h>
int main()
{
    int n,r,t,rev=0;
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        r=n%10;
       
        n=n/10;
        printf("%d",r);
    }
    
}