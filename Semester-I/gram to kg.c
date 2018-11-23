#include <stdio.h>
#include <conio.h>

int main(){
	float G,KG;
	int cho;
	char cont = 'y';
	do
	{	
amazing:
		printf("\nchoose a conversion");
		printf("\n1. KG To Gram\n2. Gram To KG");
		scanf("%d",&cho);
		
		switch(cho)
		{
			case 1: printf("\nenter weight in Kg");
					scanf("%f",&KG);
					G=KG*1000.0;
					printf("\nWeight in Grams = %f",G);		
					break;		
			case 2: printf("\nenter weight in Grams");
					scanf("%f",&G);
					KG=G/1000.0;
					printf("\nWeight in KG = %f",KG);
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
