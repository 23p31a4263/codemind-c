#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            c++;
            break;
        }
    }
    if(c==0&&n!=1)
    {
    printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
    
}