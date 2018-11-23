#include <stdio.h>

void main()
{
	float C,F;
	printf("\nEnter the temperature in Celcius\n");
	scanf("%f",&C);
	F=C*1.8+32.0;
	printf("\nFarenheit = %.1f",F);
	getchar();
	printf("\nEnter the temperature in Farenheit\n");
	scanf("%f",&F);
	C=F-32.0; 
	C=C/1.80000;
	printf("\nCelcius = %.1f",C);
	getchar();
}
