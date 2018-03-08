#include<stdio.h>
void main()
{
    int n,k,i,a[20];
    printf("Enter the Size:");
    scanf("%d",&n);
    printf("\nEnter Search element:");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==k)
        {
            printf("\n Yes equal %d",k);
        }
        else
        {
            printf("\n No not equal %d",k);
        }
     
    }
}
