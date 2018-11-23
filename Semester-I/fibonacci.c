#include <stdio.h>
#include <conio.h>

void main()
{
	int a,b,c,n,i;
	a=0;
	b=1;
	printf("\nEnter A Number Tp Define The Fibonacci Series! ");
	scanf("%d",&n);
	printf("\nThe Series Is: ");
	printf("%d\t%d",a,b);
	
	for(i=0;i<n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("\t%d",c);
	}
	getch();
}
