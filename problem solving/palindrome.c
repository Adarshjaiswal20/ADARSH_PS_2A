#include<stdio.h>
void main()
{
    int a,m,n,rev=0;
    printf("enter value of n");
    scanf("%d",&n);
    m=n;
    while(n>0)
    {
        a= n%10;
        rev= rev*10+a;
        n= n/10;
    }
    printf("reverse no %d",rev);
    if(m==rev)
    printf("no is palindrom");
    else
    printf("no is not palindrome");
}
