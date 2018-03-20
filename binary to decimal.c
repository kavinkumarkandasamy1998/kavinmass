#include<stdio.h>
void main()
{
    int num,rem,decimal=0,binary,base=1;
    printf("Enter the binary number:");
    scanf("%d",&num);
     binary=num;
     while(num>0)
    {
        rem=num%10;
        decimal=decimal+rem*base;
        num=num/10;
        base=base*2;
    }
    printf("The decimal number:%d",decimal);
}
