#include<stdio.h>
void main()
{
    int i,j,n,count = 0,k,a[100];
    printf("enter thr range of number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        a[i]= i+1;
        if(a[i]%2==0)
        {
            printf("2");
        }
    }
}