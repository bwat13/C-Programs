#include <stdio.h>
#include <conio.h>

int main()
{
	int a[6] = {55,42,1333,411,421,4121};
	int n,i,sorted=1,temp;
	printf("\nenter the value of n");
	scanf("%d",&n);
	printf("\nEnter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\norignal array");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	while(sorted)
	{
		for(i=0;i<n-1;i++)
		{
			if(a[i]>a[i+1])
			{
				sorted=0;
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
		if(sorted)
			break;
		sorted=1;
	}
	printf("\nSorted array:");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
