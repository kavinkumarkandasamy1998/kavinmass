#include<stdio.h>
void main()
{
    int num, remainder, base = 1, binary = 0;
    printf("Enter the decimal number:");
    scanf("%d", &num);
    while (num > 0)
    {
        remainder = num % 2;
        binary = binary + remainder * base;
        num = num / 2;
        base = base * 10;
    }
    printf("The binary number:%d",binary);
}
