#include <stdio.h>
#include <conio.h>
int isVowel(char alpha);
int main()
{
	char ch;
	system("cls");
	printf("\nEnter an alphabet to check its vowel or not!");
	scanf("%c",&ch);
	printf("\nalphabet %c is a %s",ch,isVowel(ch)? "Vowel" : "Is Not A Vowel");
	getch();
}

int isVowel(char alpha)
{
 	switch(alpha)
 	{
		case 'A':
		case 'a':
		case 'E':
		case 'e':
		case 'I':
		case 'i':
		case 'O':
		case 'o':
		case 'U':
		case 'u':
	 		 	 return 1;
 		 	 	break;
	 default: return 0;
	}
}
