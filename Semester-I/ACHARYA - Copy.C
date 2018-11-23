#include <stdio.h>
//#include <conio.h>

void readArray(int arraynum[],int n);
void printArray(int arraynum[],int n);
int minArr(int arraynum[],int n);
int maxArr(int arraynum[],int n);
int maxPos(int arraynum[],int n);
int minPos(int arraynum[],int n);
int lastminArr(int arraynum[],int n);
int lastmaxArr(int arraynum[],int n);
int lastminPos(int arraynum[],int n);
int lastmaxPos(int arraynum[],int n);
int main()
{
	//system("cls");
	int i,n=8,minpos,maxpos,lastminpos,lastmaxpos,minnum,maxnum,lastminnum,lastmaxnum;
	int arraynum[20];// = {1,5,7,9,21,31,33,55};
	printf("\nEnter The Number Of Elements");
	scanf("%d",&n);
	printf("\nEnter The elements");
	readArray(arraynum,n);
	printArray(arraynum,n);
	minnum=minArr(arraynum,n);
	maxnum=maxArr(arraynum,n);
	minpos=minPos(arraynum,n);
	maxpos=maxPos(arraynum,n);
	lastminnum=lastminArr(arraynum,n);
	lastmaxnum=lastmaxArr(arraynum,n);
	printf("\nThe minimum number is %d and its position is %d",minnum,minpos);
	printf("\nThe maximum number is %d and its position is %d",maxnum,maxpos);
	printf("\nThe last minimum number is %d and its position is %d",lastminnum,lastminpos);
	printf("\nThe last maximum number is %d and its position is %d",lastmaxnum,lastmaxpos);
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
		printf("%d\t",arraynum[i]);
	}
}

int minArr(int arraynum[],int n)
{
	int min=arraynum[0],i;
	for(i=1;i<n;i++)
	{
		if(min>arraynum[i])
			   min=arraynum[i];
	}
	return min;
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

int minPos(int arraynum[],int n)
{
	int min=arraynum[0],fminpos=0,i;
	for(i=1;i<n;i++)
	{
		if(min>arraynum[i])
		    {	
				min=arraynum[i];
				fminpos=i;
		    }
	}
	return fminpos+1;
}

int maxPos(int arraynum[],int n)
{
	int max=arraynum[0],fmaxpos=0,i;
	for(i=1;i<n;i++)
	{
		if(arraynum[i]>max)
	    {   
			max=arraynum[i];
			fmaxpos=i;
	    }
	}
	return fmaxpos+1;
}

int lastminArr(int arraynum[],int n)
{
	int min=arraynum[0],i;
	for(i=1;i<n;i++)
	{
		if(min>=arraynum[i])
		{
  			   min=arraynum[i];
  		}
	}
	return min;
}

int lastmaxArr(int arraynum[],int n)
{
	int max=arraynum[0],i;
	for(i=1;i<n;i++)
	{
		if(arraynum[i]>=max)
		{
  			   max=arraynum[i];
  		}
	}
	return max;
}
