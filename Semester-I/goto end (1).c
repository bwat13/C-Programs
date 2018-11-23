#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
int main()
{
	int a,i,ai;
	int ab=15;a=0;
start:
	for(i=0;i<=a;i++)
	{
		a++;
		printf("\nvalue of a = %d",a);
		if(i>ab)
		{
			printf("\nloop completed starting termination procedure");
			goto end;
		}
	}
end:
	printf("\nProgram will now end in %d seconds",ab);
	sleep(ab);
	//goto start;
	//exit(0);
	return 0;
}
