#include<stdio.h>
int main()
{
    int i,n,c;
    scanf("%d",&n);
    for(i=1;i<=12;i++)
    {
        c=n*i;
        printf("%d x %d = %d
",n,i,c);
    }
}