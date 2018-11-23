#include <stdio.h>
#include <conio.h>

int readArr(int array[],int n);
int sortArr(int array[],int n);
int printArr(int array[],int n);
int main()
{
	int n,array[100];
	printf("\nEnter the number of elements");
	scanf("%d",&n);
	printf("\nEnter %d elements",n);
	readArr(array,n);
	sortArr(array,n);
	printArr(array,n);
	return 0;
}

int readArr(int array[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
}

int sortArr(int array[],int n)
{
 	int i,j,temp,sorted;
 	for(i=0;i<n-1;i++)
 	{
 		for(j=0;j<n-i-1;j++)
 		{
 			printf("\ni+1\ti\tsorted\tj");
 			sorted=1;
 			if(array[j]>array[j+1])
 			{
 				sorted=0;
 				printf("\n%d\t%d\t%d\t%d",i+1,i,sorted,j);
 				temp=array[j];
 				array[j]=array[j+1];
 				array[j+1]=temp;
	 		}
 		}
	}
}

int printArr(int array[],int n)
{
	int i;
	printf("\nSorted elements are as follows");
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",array[i]);
	}
}
