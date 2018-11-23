#include<stdio.h>
#include<conio.h>
#include<math.h>

int ans,num,cho;
float num2,r1,l,b;
float A1,A2;
char ch='y';
float CArea(float r1);
float RArea(float l, float b);
void main()
{
clrscr();
do
{
	flushall();
	printf("\n 1. Square Of A Number");
	printf("\n 2. Cube Of A Number ");
	printf("\n 3. Area Of Circle With Radius");
	printf("\n 4. Area Of A Rectangle With Length Breadth ");
	printf("\n 5. Exit ");
	printf("\n Make a choice ");
	scanf("%d",&cho);
	switch(cho)
	{
		case 1:
			printf("\n Enter A Number ");
			scanf("%d",&num);
			ans = num * num;
			printf("\n The Square Of The Number Is %d ",ans);
			break;

		case 2:
			printf("\n Enter A Number ");
			scanf("%d",&num);
			ans = num*num*num;
			printf("\n The Cube Of The Number Is %d ",ans);
			break;
		case 3:
			printf("\n Enter The Radius Of The Circle ");
			scanf("%f",&r1);
			A1 = CArea(r1);
			printf("\n The Area Of A Circle Is %.2f ",A1);
			break;
		case 4:
			printf("\n Enter The Length And Breadth ");
			scanf("%f %f",&l,&b);
			A2 = RArea(l,b);
			printf("\n The Area Of Rectangle Is %.2f ",A2);
			break;
		case 5:
			exit(0);
		default:
			printf("\n Enter A Valid Choice ");
	}
	flushall();
	printf("\n Do You Want To Continue? Y / N ");

	scanf("%c",&ch);
}
	while( ch == 'y' || ch == 'Y');
	getch();
}
float CArea(float r)
{
	float r2;
	r2=M_PI*r*r;
	return(r2);
}

float RArea(float l,float b)
{
	float ar;
	ar=l*b;
	return(ar);
}