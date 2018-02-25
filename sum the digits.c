#include<stdio.h>
void main()
{
    int n,i,s[10],sum=0;
    printf("Enter the total number of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=s[i];
    }
    printf("The sum is %d",sum);
}
