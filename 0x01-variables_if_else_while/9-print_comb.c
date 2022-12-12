#include <stdio.h>
#include <stdlib.h>
/**
*main - print all combinations of single digi numbers
*Return: Always 0 (Success)
*/
int main(void)
{
int n;
for (n = 0; n <= 9; n++)
{
putchar(n + '0');
if (n < 9)
{
putchar(',');
putchar(' ');
}
putchar('\n');
}
return (0);
}
