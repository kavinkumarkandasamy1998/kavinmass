#include<stdio.h>
#include<string.h>
void main()
{
	char s[30];
	int i,m;
	printf("Enter the String:");
	scanf("%[^\n]s",s);
	m=strlen(s);
	for(i=0;i<m;i++)
	{
		if(i==0)
		{
			s[i]=toupper(s[i]);
		}
		if(s[i]==' ')
		{
			s[i+1]=toupper(s[i+1]);
		}
	}
	printf("\nThe camel case of string:%s",s);
}
