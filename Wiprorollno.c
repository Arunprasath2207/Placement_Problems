#include<stdio.h>
#include<string.h>
int main()
{
    char num[100];
    int x;
    scanf("%s",num);
    if(strlen(num)%2==0)
    {
       x=strlen(num);
    }
    else
    {
        x=strlen(num)-1;
    }
    for(int i=0;i<x;i+=2)
    {
       if(num[i]-'0'>num[i+1]-'0')
       {
           printf("%d",num[i]-'0');
       }
       else
       {
           printf("%d",num[i+1]-'0');
       }
    }
}