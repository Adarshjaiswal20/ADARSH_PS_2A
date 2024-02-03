#include<stdio.h>
void main()
{
    int side1,side2,side3;
    printf("enter the side 1");
    scanf("%d",&side1);
    printf("enter the side 2");
    scanf("%d",&side2);
    printf("enter the side 3");
    scanf("%d",&side3);
    if(side1==side2&&side3==side2){
        printf("triangle is equilateral triangle");

    }
    
     else if(side1==side2|| side2==side3||side3==side1){

        printf("triangle is isoscles ");
     }
    
    else if((side1 != side2) &&   ( side3 != side2)){
        printf("triangle is scalane");


    }
    
}