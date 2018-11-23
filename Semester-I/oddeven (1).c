#include <stdio.h>

int isEven(int);
void main()
{
	int i,n;
	printf("\nEnter a number till which you want to check the odd even ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("\nThe Number %d Is %s",i,(isEven(i)) ? "Even" : "Odd");
	}
	getch();
}

int isEven(int n)
{
	int value;
	if(n % 2 != 0)
		return 0;
	else
		return 1;
	//return value;
}

