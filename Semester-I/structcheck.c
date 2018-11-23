#include <stdio.h>

void main()
{
	char Arr[300][3]={{'Rachit','Sector-9 Vashi',70},{4,5,6}};
	int i,j;
	for(i=0;i<2;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		{
			printf("%s",Arr[i][j]);
			printf(" ");
		}
	}
}
