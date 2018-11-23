/*
 * C program to accept a decimal number and convert it to binary
 * and count the number of 1's in the binary number
 */
#include <stdio.h>
 
void main()
{
    long long num, decimal_num, remainder, base = 1, converted = 0,into;
 
    printf("Enter a decimal integer \n");
    scanf("%ld", &num);
    printf("\nenter the base of conversion");
    scanf("%ld",&into);
    decimal_num = num;
    while (num > 0)
    {
        remainder = num % into;
        converted = converted + remainder * base;
        num = num / into;
        base = base * 10;
    }
    printf("Input number is = %d\n", decimal_num);
    printf("Its s equivalent is = %ld\n", converted);
    system("pause");
}
