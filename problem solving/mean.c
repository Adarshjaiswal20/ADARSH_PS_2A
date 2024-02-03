#include<stdio.h>
int main()
{
int invalue[]={2,4,5,2,6};
int num_value=5;
float tot=0;
float mean=0;
for(int i=0; i<num_value; i++)
{
tot = tot+invalue[i];
}
mean = tot/num_value;
printf("The mean value is: %.1f",mean);
 //Median calculation   
float median = 0;
float mid=0;
if(num_value%2 == 0)
{
int temp=(num_value/2)-1;
for(int i=0;i<num_value;i++)
{
if(temp==i || (temp+1)==i)
{
mid=mid+invalue[i];
}
}
mid=mid/2;
printf("Median value is: %.1f",mid);
}
else 
{
int temp=(num_value/2);
for(int i=0;i<num_value;i++)
{
if(temp==i)
{
int mid=invalue[i];
printf("Median value: %d",mid);
}
}
}
return 0;
}
