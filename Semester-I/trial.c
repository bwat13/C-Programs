#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <bwat.h>

void main()
{
	int i;
	char name[1025] = "This is a test message my friends";// {'R','A','C','H','I','T'};
	for(i=0;i<strlen(name);i++)
	{
		//sleep(1);
		delay(1);
		printf("%c",name[i]);
	}
}

