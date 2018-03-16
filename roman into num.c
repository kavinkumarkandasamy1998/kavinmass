#include<stdio.h>
#include<string.h>
int main()
{
	int i,sum=0,a[30],m,k;
	char r[20];
	printf("Enter the Roman number:");
	scanf("%s",r);
	m=strlen(r);
	for(i=0;i<m;i++)
	{
		switch(r[i])
		{
			case 'I':
				a[i]=1;
				break;
			case 'V':
				a[i]=5;
				break;
			case 'X':
				a[i]=10;
				break;
		}
	}
 k=a[m-1];
   for(i=m-1;i>0;i--)
   {
      if(a[i]>a[i - 1])
      {
     k=k-a[i - 1];
      }
      if(a[i]<=a[i-1])
      {
     k=k+a[i-1];
      }
   }
   printf("decimal equivalent is %d",k);
	
}
