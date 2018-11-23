#include <stdio.h> 

float average(float marks[]);

void main()
{ 
	float avg, marks[] = { 1,1,1,1,1,1 };
	avg = average(marks); /* Only name of array is passed as argument. */
	printf("\nAverage marks=%.2f", avg);
} 
float average(float marks[]) 
{
	int i; 
	float avg, sum = 0.0; 
	for (i = 0; i < 6; ++i)
	{
		sum += marks[i]; 
		printf("\n%f",sum);
	}
	avg = (sum / 6); 
	return avg; 
} 

