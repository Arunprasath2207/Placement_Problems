#include<stdio.h>
int main()
{
    int a[100];
    int b[100];
    int i,j,n,k;
    int count=0;
    int position;
    int swap;
    printf("Enter the No. of elements present in the array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
         k=a[i];
         count=0;
        for(j=1;j<k;j++)
        {
            if(k%j==0)
            {
                count++;
            }
        }
        b[i]=count;
    }
    int temp;
    for(i=0;i<n;i++)
    { 
        for(j=i+1;j<n;j++)
        {
            if(b[i]>b[j])
            {
                swap=b[i];
                b[i]=b[j];
                b[j]=swap;
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}