#include <stdio.h>
#include <conio.h>

void readArray(int arraynum[],int n);
void printArray(int arraynum[],int n);
int maxArr(int arraynum[],int n);
void main()
{
	//system("cls");
	int i,n,maxnum;
	int arraynum[20];// = {1,5,7,9,21,31,33,55};
	printf("\nEnter The Number Of Elements");
	scanf("%d",&n);
	printf("\nEnter The elements");
	readArray(arraynum,n);
	printf("\nThe elements are: ");
	printArray(arraynum,n);
	maxnum=maxArr(arraynum,n);
	printf("\nThe maximum number is %d",maxnum);
	getchar();
}

void readArray(int arraynum[],int n)
{
	int i;
	 for(i=0;i<n;i++)
	{
		scanf("%d",&arraynum[i]);
	}
}
void printArray(int arraynum[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",arraynum[i]);
	}
}

int maxArr(int arraynum[],int n)
{
	int max=arraynum[0],i;
	for(i=1;i<n;i++)
	{
		if(arraynum[i]>max)
			   max=arraynum[i];
	}
	return max;
}

