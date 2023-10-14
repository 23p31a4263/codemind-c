#include<stdio.h>
int main()
{
    int R;
    float volume;
    scanf("%d",&R);
    volume=(3.14*R*R*R)*4/3;
    printf("%.2f",volume);
}