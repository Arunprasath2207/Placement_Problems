#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int array[100];
    int position,swap;
    int i,j,x,y,b,n;
    char s1[20],s2[20],s3[30],s4[20];
    printf("Enter number of elements\n");
    scanf("%d", &n);
    printf("Enter %d integers\n", n);
    for ( i = 0 ; i < n ; i++ )
      scanf("%d", &array[i]);
      for ( i = 0 ; i < ( n - 1 ) ; i++ )
   {
      for ( j = i + 1 ; j < n ; j++ )
      {
          position=i;
          sprintf(s1,"%d",array[i]);
          sprintf(s2,"%d",array[j]);
          sprintf(s3,"%d",array[i]);
          sprintf(s4,"%d",array[j]);  
          strcat(s1,s2);
          strcat(s4,s3);
          x=atoi(s1);
          y=atoi(s4); 
          if(x<y)
          {
            position = j;
          }
          if ( position != i )
           {
             swap = array[i];
             array[i] = array[position];
             array[position] = swap;
           }
      }
}
      for(i=0;i<n;i++)
       {
           printf("%d",array[i]);
       }
}
    

    
    