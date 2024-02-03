#include<stdio.h>
void main()
{
int D,M,Y,b[13],sum=0,d,i;
printf("enter the day,month,year");
scanf("%d%d%d",&D,&M,&Y);
b[0]=0;
b[1]=31;
b[2]=28;
b[3]=31;
b[4]=30;
b[5]=31;
b[6]=30;
b[7]=31;
b[8]=31;
b[9]=30;
b[10]=31;
b[11]=30;
b[12]=31;
if(((Y%4==0)&&(Y%100!=0))||(Y%400==0))
b[2]=29;
while(M>0)
{
    sum=sum+b[M-1];
    M=M-1;
    
}
d=Y-2001;
i=365*d+d/4+(D-1)+sum;
while(i>6)
i=i-7;
if(i==0)
    printf("monday");
else if(i==1)
    printf("tuesday");
else if(i==2)
    printf("wednesday");
else if(i==3)
    printf("thursday");
else if(i==4)
    printf("friday");
else if(i==5)
    printf("saturday");
else if(i==6)
    printf("sunday");
}