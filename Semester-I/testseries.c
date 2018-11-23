#include <stdio.h>
#include <conio.h>

int main(){
	int i,a=-1,b;
	int sum;
    for(i=1;i<=20;i+=2)
    {
        a*=-1;
        b=i;
        b*=a;
		sum+=b;
        printf("%d ",b);
    }
    printf("\nsum = %d",sum);
}
