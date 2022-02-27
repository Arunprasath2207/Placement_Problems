#include<stdio.h>
#include<string.h>
int main()
{
    int n,k;
    char name[20];
    scanf("%d",&n);
    scanf(" %[^\n]s",name);
    k=n;
    for(int j=0;j<strlen(name);j++)
    {
        if(name[j]=='a'|| name[j]=='e' || name[j]=='i' || name[j]=='o' || name[j]=='u' || name[j]=='A'|| name[j]=='E'|| name[j]=='I' 
                 || name[j]=='O' || name[j]=='U')
               {
                   k=k-1;
               }
    }
    printf("%d",k);
}
