#include <stdio.h>
#include <stdbool.h>

int main(){
	int i,j,k;
	bool isTrue = true;
	while(isTrue)
	{
		for(k=0;k<=10;k++)
		{
			for(i=0;i<k;i++)
			{
				for(j=0;j<i;j++)
				{
					printf("*");
				}
				printf("\n");
			}
		}
		isTrue=false;
	}	
	system("PAUSE");
	return 0;
}
