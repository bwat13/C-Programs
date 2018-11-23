#include <stdio.h>
#include <conio.h>

int main(){
	float M,KM;
	int cho;
	char cont = 'y';
	do
	{	
amazing:
		printf("\nchoose a conversion");
		printf("\n1. KM To Metre\n2. Metres To KM");
		scanf("%d",&cho);
		
		switch(cho)
		{
			case 1: printf("\nenter Distance in KM");
					scanf("%f",&KM);
					M=KM*1000.0;
					printf("\nDistance in Metres = %.2f",M);		
					break;		
			case 2: printf("\nenter Distance in Metres");
					scanf("%f",&M);
					KM=M/1000.0;
					printf("\nDistance in KM = %.2f",KM);
					break;
			default : printf("\nenter a appropriate choice");
						goto amazing;
		}
		printf("\ndo you wish to continue?");
		printf("\t Y for yes Anything for no\n");
		scanf("%s",&cont);
	}
	while(cont=='Y' || cont == 'y');
}
