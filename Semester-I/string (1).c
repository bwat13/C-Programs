#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
	    char str1[]="University";
		char temp1[1024]="Turbo";
		char temp2[1024]=" ";
		char temp3[1024]="C++";
		char tempstr[1024] = "The STRCAT is ";
		char string[1025];
		int choice;
		char ch; 
		char *pch;
		strcpy(string,str1);
		printf("\nLength Of String string[] is %d and the string is %s",strlen(string),string);
		strcat(tempstr,temp1);
		strcat(tempstr,temp2);
		strcat(tempstr,temp3);
		printf("\n");
		printf(tempstr);
		strrev(str1);
		printf("\nReversed string is = %s",str1);
		strrev(str1);
		strlwr(str1);
		printf("\nString in lower case is = %s",str1);
		strupr(str1);
		printf("\nString in upper case is = %s",str1);	
		pch=strchr(str1,'I');
		while (pch!=NULL)
		{
			printf("\nPosition On Array = %d",pch-str1+1);
			pch=strchr(pch+1,'I');
		}
}
