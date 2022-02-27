#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int count=0;
    int j=2;
    while(n>0)
    {
    for(int i=1;i<j;i++)
    {
        if(j%i==0)
        count++;
    }
    if(count==1)
    {
        printf(" %d ",j);
        j++;
        n--;
        count=0;
    }
    else
    {
        j++;
        count=0;
    }
    }
}