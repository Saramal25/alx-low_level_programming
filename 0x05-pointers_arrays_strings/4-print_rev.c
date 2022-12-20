#include "main.h"
/**
*print_rev - printing a string in reverse 
*@s: the string to be printed in rev 
*Return: Nothing
*/
void print_rev(char *s)
{
int count = 0;
while (*s)
{
s++;
count++;
}
while (count)
{
s--;
_putchar(*s);
count--;
}
_putchar('\n');
}
