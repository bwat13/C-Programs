#include<stdio.h>

#define clrscr() system("cls")

int main()
{
	clrscr();
	//system("cls"); 
	int i;
	for(i=0;i<15;i++)
	{
		textcolor(i);
		cprintf("Color check %d is the i",i);
	}
	getch();
	return 0;
}
