#include <stdio.h>
void main()
{
	int n,m,r=0,i;
	printf("Enter the number:");
    scanf("%d",&n);
	while(n!=0)
	{
		m=n%10;
		r=(r*10)+m;
		n=n/10;
	}
	printf("The odd numbers are:");
	while(r!=0)
	{
		i=r%10;
		r=r/10;
		if(i%2!=0)
		{
		  printf("%d  ",i);
		}

	}
}
