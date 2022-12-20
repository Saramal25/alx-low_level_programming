#include "main.h"
/**
*_puts - Writes the character str to stdouts
*@str: this is my input string
*Return: On success 1
*/
void _puts(char *str)
{
int string = 0;
while (*str != '\0')
{
string++;
str++;
}
_putchar('\n');
}
return (0);

