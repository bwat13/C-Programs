#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int ans,num,cho;
float num2,r1,l,b,s;
float A1,A2;
char ch='y';
float CArea(float r1);
float RArea(float l, float b);
float ASqr(float s);
void main()
{
//clrscr();
do
{
//	flushall();
	printf("\n 1. Area of square");
	printf("\n 2. area of rectangle ");
	printf("\n 3. Area Of Circle With Radius");
	printf("\n 4. Exit ");
	printf("\n Make a choice ");
	scanf("%d",&cho);
	switch(cho)
	{
		case 1:
			printf("\n Enter A Number ");
			scanf("%f",&num2);
			ans = ASqr(num);
			printf("\n The Area of square Is %f ",ans);
			break;

		case 2:
			printf("\n Enter The Length And Breadth ");
			scanf("%f %f",&l,&b);
			A2 = RArea(l,b);
			printf("\n The Area Of Rectangle Is %.2f ",A2);
			break;
		case 3:
			printf("\n Enter The Radius Of The Circle ");
			scanf("%f",&r1);
			A1 = CArea(r1);
			printf("\n The Area Of A Circle Is %.2f ",A1);
			break;
		case 4:
			exit(0);
		default:
			printf("\n Enter A Valid Choice ");
	}
//	flushall();
	printf("\n Do You Want To Continue? Y / N ");

	scanf("%S",&ch);
}
	while( ch == 'y' || ch == 'Y');
	getch();
}
float ASqr(float s)
{
	float s2;
	s2=s*s;
	return(s2);
}
float CArea(float r)
{
	float r2;
	r2=3.1415*r*r;
	return(r2);
}

float RArea(float l,float b)
{
	float ar;
	ar=l*b;
	return(ar);
}
