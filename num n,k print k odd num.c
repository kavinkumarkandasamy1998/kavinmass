#include <stdio.h>
int main()
{
	int n,a[100],b[100],r,k,i,c=0,j=0;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	printf("Enter the k value : ");
	scanf("%d",&k);
	printf("Enter the array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!=0)
		{
			b[j]=a[i];
			j++;
		}
	}
	printf("%dnd odd number is %d",k,b[k]);
	return 0;
}
