#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
       char  str1[23];// = "abcdefghi";
	char temp1[] = "Turbo";
	char temp2[] = " ";
	char temp3[] = "C++";
	char tempstr[100];

	char string[35];
	system("cls");
	printf("\nEnter A String");
	scanf("%s",&str1);
	printf("\nOrignal String %s",str1);
	strcpy(string,str1);
	string[0]='H';
	printf("\nLength Of String string[] is %d and the string is %s",strlen(string),string);
	strcat(tempstr,temp1);
	strcat(tempstr,temp2);
	strcat(tempstr,temp3);
	printf("\nAfter strcat %s",tempstr);
	strrev(str1);
	printf("\nAfter strrev %s",str1);
	strrev(str1); // rerstore orignal
	strlwr(str1);
	printf("\nlower %s",str1);
	strupr(str1);
	printf("\nUpper : %s",str1);
	getch();
}