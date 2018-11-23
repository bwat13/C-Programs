#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
float SRoot(int);

int main(){
	int value;
	int root;
	printf("\nEnter the number to gets it square root! ");
	scanf("%d",&value);
	root=SRoot(value);
	printf("\nThe sqrt of %d is %d",value,root);
	return 0;
}
float SRoot(int num)
{
	float x = num;
	float y = 1;
	float a = 0.000001;
	
	while(abs(x-y) > a)
	{
		x = (x+y)/2;
		y = num/x;
	}
	return x;
}
