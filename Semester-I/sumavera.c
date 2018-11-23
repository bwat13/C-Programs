#include <stdio.h>
#include <conio.h>
float average(float marks[5]);
int main(){
	float avg,marks[5]={2.0,3.5,1.5,9.0,10.0};
	int A[5]={1,2,3,4,5};
	avg=average(marks);
	printf("\nThe Average = %.2f\n",avg);
	system("pause");
	return 0;
}

float average(float marks[5])
{
	int i;
	float sum,average;
	for(i=0;i<5;i++)
	{
		sum+=marks[i];
		printf("\n%.2f",sum);
	}
	average=sum/5;
	return average;
}
