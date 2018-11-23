#include<stdio.h>
 
int main()
{
   int nelements, selement= 3, count=3, i;
 /* 
  I is numbers (1 to n)
  Selement is starting element
  nelements is number of elements
  count is counting times the loop
 */
   printf("Enter the number of prime numbers required\n");
   scanf("%d",&nelements);
 
   if ( nelements >= 1 )
   {
      printf("First %d prime numbers are :\n",nelements);
      printf("2\n");
   }
 
   while(count <= nelements )
   {
   	//printf("[outside loop]i=%d\tcount=%d\n",i,count);
      for( i = 2 ; i <= selement - 1 ; i++ )
      {
      	//printf("[inside loop]i=%d\tcount=%d\nselement-1=%d\n",i,count,selement);
      	printf("\n[Debug]%d mod %d is %d",selement,i,selement%i);
         if ( selement%i == 0 )
            break;
      }
      if ( i == selement )
      {
         printf("%d\n", i);
         count++;
      }
      selement++; //incrementing starting element
   }
 
   return 0;
}
