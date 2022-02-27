#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    char num[100];
    printf("Enter the digit to add to every digit to the number");
    scanf("%d",&n);
    printf("Enter the number");
    scanf("%s",num);
    for(int i=0;i<strlen(num);i++)
    {
        printf("%d",num[i]-'0'+n);
    }    
}