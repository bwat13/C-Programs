#include<stdio.h>
 
int main()
{
   int n, selement = 3, count, c;
 
   printf("Enter the number of prime numbers required\n");
   scanf("%d",&n);
 
   if ( n >= 1 )
   {
      printf("First %d prime numbers are :\n",n);
      printf("2\n");
   }
 
   for ( count = 2 ; count <= n ;  )
   {
    for ( c = 2 ; c <= selement - 1 ; c++ )
    {
    if ( selement%c == 0 )
    	break;
	}
    if ( c == selement )
    {
        printf("%d\n", selement);
        count++;
    }
      selement++;
   }
 
   return 0;
}
