#include <stdio.h>
#include <conio.h>

void main()
{
	int a,b,c;
	printf("\nEnter 3 integers");
	scanf("%d%d%d",&a,&b,&c);
	if(b<a)
	{
		a=b;
	}
	if(c<a)
	{
		a=c;
	}
	printf("\nThe minimum of 3 number is %d",a);
	getch();
}
