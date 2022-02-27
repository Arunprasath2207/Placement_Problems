#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    char b[100];
    int sum1=0;
    int sum2=0;
    scanf("%s",a);
    scanf("%s",b);
    for(int i=0;i<strlen(a);i++)
    {
       sum1+=a[i];
       sum2+=b[i];
    }
    if(sum1==sum2)
    {
        printf("Anagram");
    }
    else
    {
        printf("Not an anagram");
    }
}