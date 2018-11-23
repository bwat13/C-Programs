#include <stdio.h>
#include <conio.h>

void main()
{
	float a,b,c,p,temp;
	printf("To Get The Type Of Triangle & Its Perimeter Enter The Value Of It's Sides");
	scanf("%f %f %f",&a,&b,&c);
	p=a+b+c;
	printf("\nThe perimeter = %.2f",p);
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
	if(a>c)
	{
		temp=c;
		c=a;
		a=temp;
	}
	if(b>c)
	{
		temp=c;
		c=b;
		b=temp;
	}
	if((c*c)==(a*a)+(b*b))
	{
		printf("\nThe triangle is right angled");
	}
	getch();
}
