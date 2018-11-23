#include <stdio.h>
#include <conio.h>
unsigned long fact(unsigned long n);
int main(){
	unsigned long n,val;
	printf("\nEnter a number to gets its factorial");
	scanf("%u",&n);
	val=fact(n);
	printf("%u! = %u",n,val);
}

unsigned long fact(unsigned long n){
	int i;
	for(i=n-1;0<i;i--)
	{
		n*=i;
	}
	return n;
}
