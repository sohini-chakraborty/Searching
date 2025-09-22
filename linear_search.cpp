#include<stdio.h>
int main()
{
	int n,key,i,found=0;
	printf("enter size of array:");
	scanf("%d",&n);
	
	int arr[n];
	printf("enter %d elements:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter search elements:");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if (arr[i]==key)
		{
			printf("elements found at position %d\n",i+1);
			found=1;
			break;
		}
	}
	if (found==0)
	{
		printf("elements not found.\n");
	}
	return 0;
}
