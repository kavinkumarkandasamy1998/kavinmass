#include<stdio.h>
void main()
{
    int a,i,s[200];
    printf("Enter the number:");
    scanf("%d",&a);
    for(i=1;i<=a;i++);
        {
            scanf("%d",&s[i]);
        }
        if(s[i]!=i)
        {
            printf("The wrong element:%d \nMissed element:%d",s[i],i);
        }
    }
