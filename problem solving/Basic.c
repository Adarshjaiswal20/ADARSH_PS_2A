#include<stdio.h>
void main()
{
    int bs,ts,hra,pf,allow,da, grade;
    char ch;
    printf("enter the basic salary");
    scanf("%d",&bs);
    printf("enter the grade");
    scanf("%ch",&grade);
    hra = 0.2*bs;
    da = 0.5*bs;
    pf = 0.11*bs;
    if(ch== 'A')
    allow= 1700;
    else if(ch=='B')
    allow = 1500;
    else
    allow = 1300;
    ts =bs+hra+da+allow-pf;
    
    printf("Total salry is %d",ts);
    



}