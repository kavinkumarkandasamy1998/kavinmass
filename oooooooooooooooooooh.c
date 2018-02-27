#include<stdio.h>
void main()
{
	int a,b,i,m;
	char c;
	printf("Enter the Number of Operations:");
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d%c%d",&a,&c,&b);
		if(i%2==0)
		{
			printf("\n%d",(a/b));
		}
		else
		{
			printf("\n%d",(a%b));
		}
	}
	
}
