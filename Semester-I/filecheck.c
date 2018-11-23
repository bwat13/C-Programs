#include <stdio.h>
#include <stdlib.h> // For exit() function
int main()
{
    char c[1000];
    FILE *fptr;
    char input[2000];
    printf("\nEnter stuff into the file");
	scanf("%[^'\n']s",&input);
	fptr = fopen("check.txt", "a+");
	if(!input)
	{
		fprintf(fptr,"%s",input);
	}
    /*if (fptr == NULL)
    {
        printf("Error! opening file\nCreating File Now!");
        // Program exits if file pointer returns NULL.
        //fopen("program.txt", "w");
        exit(1);         
    }*/

    // reads text until newline 
    fscanf(fptr,"%[^\n]", c);

    printf("Data from the file:\n%s", c);
    fclose(fptr);
    
    return 0;
}
