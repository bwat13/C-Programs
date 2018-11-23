#include<stdio.h>
#include<conio.h>
#include<math.h>

float CArea(float);
float RArea(float, float);
float A1,A2,r1,l1,b1;
int choice;
char cho='Y';
int main()
{
	//clrscr();
	//flushall();
	do {
		printf("\nChoose An Option");
		printf("\n1.Circle\n2.Rectangle\n3.Exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("\nEnter The Radius Of The Circle. ");
			scanf("%f",&r1);
			A1=CArea(r1);
			printf("\nThe Area Of The Circle Is %.2f. ",A1);
			break;
			
			case 2: printf("\nEnter The Length & Breadth Of The Rectangle. ");
			scanf("%f%f",&l1,&b1);
			A2=RArea(l1,b1);
			printf("\nThe Area Of The Rectangle is %.2f. ",A2);
			break;
			
			case 3: printf("BYE :( Hope To See You Again Sometime Soon :)");
					//exit(1);
			
			default: printf("\nYou Entered A  Invalid Choice!! ");
		}
	getch();
	//flushall();
	printf("\nDo You Want To Continue The Program? Y/N\n");
	scanf("%c",&cho);
	} while ( cho=='y'  || cho=='Y');
	return 0;

}
float CArea(float r)
{
	float AC;
	AC=M_PI*r*r;
	return (AC);
}
float RArea(float l,float b)
{
	float AR;
	AR=l*b;
	return (AR);
}
