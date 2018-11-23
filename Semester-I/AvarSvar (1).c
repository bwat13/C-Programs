#include <stdio.h>
#include <conio.h>
void main()
{
	int i;
	void increment();
	system("cls");
	for(i=0;i<3;i++)
		increment();
	getch();
}

void increment()
{
	auto int avar=1;
	static int svar=2;
	avar++;
	svar++;
	printf("Automatic Variable is %d \t Static Variable is %d \n",avar,svar);
}
