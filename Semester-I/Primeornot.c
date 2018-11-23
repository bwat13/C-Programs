#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
void main()
{
    int num, i, flag;
 
    printf("Enter a number \n");
    scanf("%d", &num);
 
    if (num <= 1)
    {
        printf("%d is not a prime numbers \n", num);
        exit(1);
    }
    flag = 0;
    for (i = 2; i <= sqrt(num); i++)
    {
        if ((num % i) == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("%d is a prime number \n", num);
     else
        printf("%d is not a prime number \n", num);
}
