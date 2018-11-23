#include <stdio.h>
#include <conio.h>

void swapArr(int a[],int b[]);
void readArr(int array[],int elements);
void sortArr(int array[],int elements);
void printArr(int array[],int elements);

void main()
{
	void justRunIt();
	justRunIt();
	getchar();
}

void justRunIt()
{
	int array[30] ;
	int n;
	
	printf("\nEnter the number of elements in array\n");
	scanf("%d",&n);
	
	printf("\nEnter %d elements of the array",n);
	readArr(array,n);
	sortArr(array,n);
	printArr(array,n);
}
void readArr(int array[],int elements)
{
	int i,n=elements;
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	
}

void sortArr(int array[],int elements)
{
	int i,j,n=elements,swap;
	for(i=0;i<n-1;i++) //because last element is always '\0'
	{
		printf("\nI=%d and N=%d and N-1=%d",i,n,n-1);
		for(j=0;j<n-i-1;j++)
		{
			printf("\nJ=%d and N=%d and N-1=%d and N-I-1=%d",i,n,n-1,n-i-1);
			if (array[j] > array[j+1]) /* For decreasing order use < */
		    {
		        swap = array[j];
		    	array[j] = array[j+1];
				array[j+1] = swap;
		    }
		}
	}
}

void printArr(int array[],int elements)
{
	int i,n=elements;
	printf("\nsorted array is as follows\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",array[i]);
	}
}
