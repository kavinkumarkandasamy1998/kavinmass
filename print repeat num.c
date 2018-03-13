#include <stdio.h>
int main()
{
	int n,a[100],k,i,c=0;
	printf("\nEnter the size of the array: ");
	scanf("%d",&n);
	printf("\nEnter the k value : ");
	scanf("%d",&k);
	printf("\nEnter the array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			c+=1;
		}
	}
	if(c>1)
	{
		printf("\n %d times repeated of %d",c,k);
	}
	else
	{
		printf("\n%d is not repeated in the array ",k);
	}
	return 0;
}
