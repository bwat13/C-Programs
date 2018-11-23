#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   char c[20000];
   char *material;
   char str[50];
   FILE *fptr;
   fptr = fopen("C:\\program.txt","a+");

   printf("%s",c);
   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }
   //printf("Enter num: ");
   //scanf("%d",&num);
    printf("Enter string: ");
    scanf("%[^\n]%*c", &str);
    //gets(str); 
   
   fprintf(fptr,"%s\n",str);
   fscanf(fptr,"\nThe Lines Are As Follows :\n%[^\n]", c);
   fclose(fptr);

   return 0;
}
