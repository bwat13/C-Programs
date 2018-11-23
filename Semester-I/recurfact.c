#include <stdio.h>
#include <conio.h>

double factorial(double num);
int main()
{
     double fact;
     fact=1;
     int i,n;
     printf("\nenter a positive integer");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
     	fact=fact*i;
	 }
     printf("\nFactorial of %d is %.0lf",n,fact);
     getch();
     return 0;
}

double factorial(double n)
{
	if(n==1)
		return 1;
	return(n*factorial(n-1));
}
