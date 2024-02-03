#include<stdio.h>
void main()
{
    char str[50];
    int i,len=0;
    printf("enter the string");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        len++;
     }
    printf("lentgh of string is %d",len);
}