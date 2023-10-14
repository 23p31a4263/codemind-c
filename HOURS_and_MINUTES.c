#include<stdio.h>
int main()
{
    int a,t,s;
    scanf("%d",&a);
    t=a/60;
    s=a-t*60;
    printf("%d Hour(s) %d Minute(s)",t,s);
    
}