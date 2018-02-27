#include<stdio.h>
void main()
{
    int n,m,s=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n>0)
    {
        m=n%10;
        s=s*10+m;
        n/=10;
    }
    printf("The reverse of the given number:%d",s);
}
