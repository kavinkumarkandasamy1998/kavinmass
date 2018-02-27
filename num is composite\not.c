#include<stdio.h>
void main()
{
    int n,i,count=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
        if(count==0)
        {
            printf("\nNo,not composite");
        }
        else
        {
            printf("\nYes, composite");
        }
   }
    
