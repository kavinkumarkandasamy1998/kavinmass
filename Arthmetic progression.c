#include<stdio.h>
void main()
{
    int a,b,c,sum=0,j;
    printf("Enter the starting element:");
    scanf("%d",&a);
    printf("Enter the difference:");
    scanf("%d",&b);
    printf("Enter the number of element:");
    scanf("%d",&c);
    for(j=1;j<=c;j++)
    {
        sum=sum+a;
        a=a+b;
    }
    printf("Arthmetic progression is :%d",sum);
}
