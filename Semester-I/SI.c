#include <stdio.h>
#include <conio.h>

float getSI(float,float,float);
int main(){
	float P,T,R;
	float SI;
	printf("\nEnter The Principle : ");
	scanf("%f",&P);
	printf("\nEnter The Time : ");
	scanf("%4f",&T);
	printf("\nEnter the Rate of interest : ");
	scanf("%3f",&R);
	SI=getSI(P,T,R);
	printf("\nSI = %f",SI);
}

float getSI(float Principle,float Time,float Rateofinterest)
{
	float SI;
	SI=(Principle * Time * Rateofinterest)/100;
	return SI;
}
