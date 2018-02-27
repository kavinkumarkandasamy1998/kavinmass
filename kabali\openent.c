#include<stdio.h>
void main()
{
	int k[20],o[20],i,b;
	printf("Enter the Number of Groups:");
	scanf("%d",&b);
	printf("\nNumber of Ninja's in Kabali and Opponent's group:");
	for(i=0;i<b;i++)
	{
		scanf("%d%d",&k[i],&o[i]);
	}
	for(i=0;i<b;i++)
	{
		printf("\n%d",o[i]-k[i]);
	}
}
