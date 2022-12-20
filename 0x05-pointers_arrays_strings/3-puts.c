#include "main.h"
/**
*_puts - Writes the character str to stdouts
*@str: this is my input string
*Return: On success 1
*/
void _puts(char *str)
{
for (; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
}

