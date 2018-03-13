#include <stdio.h>
int main()
{
	int m,a[200],i=0,j,temp,p=1,b;
	printf("Enter the number: ");
	scanf("%d",&m);
	printf("Enetr the digits: ");
	scanf("%d",&b);
	while(m>0)
	{
		temp=m%10;
		a[i]=temp;
		m=m/10;
		i++;
	}
	for(i=0;i<b;i++)
	{
		printf("\t%d",a[i]);
	}
	return 0;
}
