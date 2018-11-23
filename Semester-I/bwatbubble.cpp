#include <stdio.h>
#include <conio.h>

void main()
{
	int A[][]={10,15,20,2,6,5};
	int n=6;
	int i,j,T;
	int sorted;
	for(i=0;i<n;i++)
	{
		if(A[i]>A[j])
		{
			T=A[i];
			A[i]=A[j];
			A[j]=T;
			sorted=0
		}	
	}
}
