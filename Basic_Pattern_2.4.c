#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=n-i;j<=n;j++)
        {
            printf("%d ",j);
        }
        printf("
");
    }
}