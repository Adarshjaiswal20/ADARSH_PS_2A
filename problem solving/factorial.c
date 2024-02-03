#include<stdio.h>
void main()
{
    int  i,j,n;
    printf("enter the no  ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(j=1;j<=2*n-2*i;j++){
         printf(" ");
        }
        for(j=i;j>=1;j--){
            printf("%d",j);
        }
        printf("\n");

    }

}