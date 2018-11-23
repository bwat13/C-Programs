#include <stdio.h>
#include <conio.h>

int main(){
	long x,y,temp;
	int i;
	printf("Enter x and y");
	scanf("%ld %ld",&x,&y);
	temp = x;
	for(i=1;i<y;i++)
	{
		temp*=x;
	}
	printf("%d to the power %d = %ld",x,y,temp);
}
