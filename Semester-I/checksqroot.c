#include <stdio.h>
//using namespace std;
#include <conio.h>
float getSqroot(int n){
	float x = n;
	float y = 1;
	float a = 0.000000000001;
	
	while((x-y)>a)
	{
		x=(x+y)/2;
		y=n/x;
	}
	return x;
}
int main(){
	int n,value;
	printf("Enter the number to find its square root\n");
	scanf("%d",&n);
	value=getSqroot(n);
	printf("[Square Root] = %f\n",getSqroot(n));
	system("pause");
	return 0;
}
