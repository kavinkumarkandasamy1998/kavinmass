#include<stdio.h>
void main()
{
    int p,r,t,i;
    printf("Enter the principle:");
    scanf("%d",&p);
    printf("Enter the rate:");
    scanf("%d",&r);
    printf("Enter the time:");
    scanf("%d",&t);
    i=(p*t*r)/100;

    printf("The simple interest:%d",i);
    
}
