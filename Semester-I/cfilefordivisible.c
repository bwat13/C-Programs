#include <stdio.h>
int main() {
	int i,x,n,count=0;
	printf("\nEnter the divisor");
	scanf("%d",&x);
	printf("\nEnter the number till which you want to check");
	scanf("%d",&n);
	printf("\n%d=n %d=x",n,x);
	
	for(i = 1; i <= n; i++)
	{
		//printf("\ni/x = %d",i%x);
		if((i%x) == 0)
		{
			printf("\n%d", i);
			count++;
		}
	}
	printf("\ncount of numbers divisible = %d",count);
	return 0;
}
