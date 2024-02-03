#include<stdio.h>
void main()
{
    int c1,c2,X,Y;
    printf("enter the value of X and Y coordinat");
    scanf("%d %d", &c1,&c2);
    if(c1>0 && c2>0)
    printf("the coordinate lies in the frist quadrants ");
    else if(c1<0 && c2>0)
    printf("the coordinate lies in second quadrants ");
    else if(c1>0 && c2<0)
    printf("the coordinate lies in seconds quadrants");
    else if(c1<0 && c2<0)
    printf("the coordinate lies in fourth quadrants");



}