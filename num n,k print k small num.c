#include <stdio.h>
int main()
{
	int n,a[100],k,i,j,temp;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	printf("Enter the k value : ");
	scanf("%d",&k);
	printf("Enter the array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0,j=i+1;i<n&&j<n;i++,j++)
	{
		if(a[i]>a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	printf("%dnd smallest number is%d ",k,a[k-1]);
	return 0;
}
