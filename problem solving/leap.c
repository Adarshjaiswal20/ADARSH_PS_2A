#include<stdio.h>
void main()
{
    int a ;
    printf("enter the year");
    scanf("%d",&a);
    a%4==0?printf("leap year"):printf("not leap year");
}
