#include <stdio.h>
#include <conio.h>

int main()
{
	int n=7,i;
	int tobefound;
	int array[100] = {1,3,4,7,31,443,99};
	printf("\nEnter the element to be found");
	scanf("%d",&tobefound);
	
	for(i=0;i<n;i++)
	{
		if(array[i]==tobefound)
		{
			printf("\nPosition is %d",i+1);
			break;
		}
		else if(i==n-1)
		{
			printf("\nThe element is not to be found in the array");
		}
	}
}
