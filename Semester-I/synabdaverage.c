#include <stdio.h>
#include <conio.h>

void main()
{
	int i,n,num,sum=0;
	float average;
	//clrscr();
	printf("\nEnter n");
	scanf("%d",&n);
	printf("\nEnter %d numbers",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num);
		sum= sum+num;
	}
	average=(sum*1.0)/n;
	printf("\nSum=%d & Average = %.2f",sum,average);
	getch();
}
