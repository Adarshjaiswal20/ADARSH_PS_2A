#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i;
    printf("enter the string :");
    gets(s);
    for(i=0;s[i]='\0';i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            s[i]= s[i]-32;
        }
    }
    printf("string in upper case = %s",s);
    return 0;
}