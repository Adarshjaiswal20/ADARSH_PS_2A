#include<stdio.h>
void main()
{
    int t;
    printf("enter the temperature");
    scanf("%d",&t);
    if(t<0)
    printf("freezing wheather");
    else if(t>=0 && t<10)
    printf("very cold");
    else if(t>=10 && t<20)
    printf("cold temperature");
    else if(t>=20 && t<30)
    printf("normal temperature");
    else if(t>=30 && t<40)
    printf("hot wheather");
    else if(t>=40)
    printf("very hot whather ");



}