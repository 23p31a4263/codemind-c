#include<stdio.h>
int main()
{
    int a;
    float area,perimeter;
    scanf("%d",&a);
    area=3.14*a*a;
    perimeter=2*3.14*a;
    printf("%.2f
%.2f",area,perimeter);
}