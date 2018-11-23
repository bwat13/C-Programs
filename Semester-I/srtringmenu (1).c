#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    char str1[1025];// = "abcdefghi";
	char temp1[1025];
	char tempstr[1025] = "My Name Is";
	char string[1025];
	int choice;
	char ch; //= 'y';
	do
	{
		system("cls");
		printf("\nChoose an option.");
		printf("\n1. Get length of the string.\n2. Concatenate string '%s' with another.\n3. Reverse the string.\n4. Convert string to lowercase.\n5. Convert string to uppercase.\n",tempstr);
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("\nEnter a string ");
				scanf("%s",&str1);
				strcpy(string,str1);
				printf("\nLength Of String string[] is %d and the string is %s",strlen(string),string);
				break;
			case 2:
				//printf("\nEnter a string ");
				//scanf("%s",&str1);
				strcat(tempstr," ");
				printf("\nEnter a different string to append to %s",tempstr);
				scanf("%s",&temp1);
				strcat(tempstr,temp1);
				printf("\n%s",tempstr);
				break;
			case 3: 
				printf("\nEnter a string ");
				scanf("%s",&str1);
				strrev(str1);
				printf("\nReversed string is = %s",str1);
				break;
			case 4: 
				printf("\nEnter a string ");
				scanf("%s",&str1);
				strlwr(str1);
				printf("\nString in lower case is = %s",str1);
				break;
			case 5:
				printf("\nEnter a string ");
				scanf("%s",&str1);	
				strupr(str1);
				printf("\nString in upper case is = %s",str1);
				break;
			default:
				printf("\nEnter a valid choice");
		}
		printf("\nDo You Want To Continue? Y / N ");
		scanf("%s",&ch);
	}
	while( ch == 'y' || ch == 'Y');
	//getch();
}
