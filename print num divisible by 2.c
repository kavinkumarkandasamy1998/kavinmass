#include<stdio.h>
void main()
{
	int i,j;
	printf("Enter the Number:");
	scanf("%d",&i);
	if(i%2==0)
	{
		j=i/2;
		printf("%d",j);
	}
	else
	{
		printf("%d",i);
	}
}
