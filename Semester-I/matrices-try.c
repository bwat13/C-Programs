#include <stdio.h>

const int m = 2;
const int n = 3;

void setMat(int M[20][20]);
void printMat(int M[20][20]);
void addMat(int X[20][20],int Y[20][20],int Z[20][20]);

int main()
{
	int A[20][20],B[20][20],C[20][20];
	printf("\nEnter The Numbers For Matrice A\n");
	setMat(A);
	printf("\nEnter The Numbers For Matrice B\n");
	setMat(B);
	addMat(A,B,C);
	printf("\nThe Numbers For Matrice C Are:");
	printMat(A);
	printf("\n\t+\t");
	printMat(B);
	printf("\n\t=\t");
	printMat(C);
	getchar();
	return 0;
}

void setMat(int M[20][20])
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&M[i][j]);
		}
	}
}

void printMat(int M[20][20])
{
 	int i,j;
	for(i=0;i<m;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		{
			printf("%d\t",M[i][j]);
		}
	}
}
 
void addMat(int X[20][20],int Y[20][20],int Z[20][20])
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			Z[i][j]=X[i][j]+Y[i][j];
		}
	}
} 
