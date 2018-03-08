#include<stdio.h>
void main()
{
	int a,i,sum=0;
	printf("Enter the number:");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		sum=sum+i;
	}
	printf("The sum of k number:%d",sum);
}
