#include <stdio.h>
#include <conio.h>
long fibbonacci(int n);
void main()
{
    long n,fibbo;
	printf("\nEnter a count of number you want the fibbonacci series till\t");
	scanf("%ld",&n);
	fibbo=fibbonacci(n);
	printf("The series is %ld",fibbo);
	getch();
}

long fibbonacci(int n)
{
	if(n==0)
		return 0;
	if(n==1)
		return 1;
	return (fibbonacci(n-1)+fibbonacci(n-2));
}
	
