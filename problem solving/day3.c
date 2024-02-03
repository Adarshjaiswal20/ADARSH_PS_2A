#include<stdio.h>
void main()
{
    int i,k=1,sum=0,n;
    printf("enter the sum of factorial upto n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=k*i;
        sum= sum+k;
    }
    printf("sum of series of factorial %d",sum);
}