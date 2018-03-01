#include<stdio.h>
void main()
{
    int r,n,p=1;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        p=p*r;
        n=n/10;
    }
    printf("The product of digit:%d",p);
}
