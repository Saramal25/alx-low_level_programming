#include <stdio.h>
#include <stdlib.h>
/**
*main - main block
*Description: prints all single number of base 10
*strating from 0, followed by a new line
*Return: Always 0 (Success)
*/
int main(void)
{
int n = 0;
while (n < 10)
{
putchar(48 + n);
if (n != 9)
{
putchar(',');
putchar(' ');
}
n++;
}
putchar('\n');
return (0);
}
