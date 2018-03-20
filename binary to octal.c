#include <stdio.h>
void main()
{
    long int binary,octal=0,j=1,remainder;
  printf("Enter the  binary number: ");
    scanf("%ld", &binary);
    while (binary!=0)
    {
        remainder=binary%10;
        octal=octal+remainder*j;
        j=j*2;
        binary=binary/10;
    }
    printf("Equivalent octal value: %lo", octal);
    return 0;
}
