#include <stdio.h>
void main(){
    int num,r,sum,temp;
    int m,n;

    printf("enter the number ");
    scanf("%d",&m);
    printf("enter ending number of range : ");
    scanf("%d",&n);
    printf("Armstrong numbers in given range are: ");
    for(num=m;num<=n;num++){
         temp=num;
         sum = 0;

         while(temp!=0){
             r=temp % 10;
             temp=temp/10;
             sum=sum+(r*r*r);
         }
         if(sum==num)
             printf("%d ",num);
    }
printf("\n");
}