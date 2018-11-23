#include <stdio.h>
#include <conio.h>

void main()
{
	int a,b,c;
	printf("To Get The Type Of Triangle Enter The Value Of It's Sides");
	scanf("%d %d %d",&a,&b,&c);
	if(a==b && b==c)
	{
		printf("\nThe Triangle Is Equilateral");
	}
	else if(a==b || b==c || a==c)
	{
		printf("\nThe Triangle Is Isoceles");
	}
	else 
	{
		printf("\nThe Triangle Is Scalene");
	}
	if ((c*c) == (a*a) + (b*b))
	{
		printf("\nThe Triangle is Right Angled Triangle");
	}
	printf("\nThe Perimeter of triangle is %d",a+b+c);
	getch();
}
