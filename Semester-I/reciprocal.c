// C program to find sum of series 
#include <stdio.h> 

// Function to return sum of 1/1 + 1/2 + 1/3 + ..+ 1/n 
double sum(int n) 
{ 
	double i, s = 0.0; 
	for (i = 1; i <= n; i++) 
		s += 1/i; 
	return s; 
} 

int main() 
{ 
	int n;
	printf("enter value of n\n");
	scanf("%d",&n); 
	printf("Sum is %f", sum(n)); 
	return 0; 
}



