#include<stdio.h> 
#include<conio.h> 
int main()
{
int i,j;
int *matrix[] = {
   (1, 2, 3, 4, 5) ,
   {2, 3, 4, 5},
   {3, 4, 5}, 
   {4, 5}, 
    {5}
};

for(i=0;i<15;i++)
{
	for(j=0;j<15;j++)
	{
		printf("%d\n",matrix[i][j]);
	}
}
//printf("Input ::");
//gets(z);
//z[5]='\0';
//puts(z);
 
}
