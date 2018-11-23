#include <stdio.h>
#include <stdlib.h>
int live_life(int n);
void main()
{
	do{
		live_life(3);
	}
	while(1==1);
}

int live_life(int n)
{
	static int i=0;
	if(i==43155)
	{
		system("pause");
		exit(0);
	}
	printf("life\n");
	i++;
	live_life(n);
}
