#include "main.h"
#include <stdlib.h>
#include <time.h>
/**
*main - progress that generates random valid
*passwords for the program 101-crackme
*Return: Always 0 (Success)
*/
int main(void)
{
int pass, sum;
srand(time(NULL));
sum = 0;
while (sum <= 2645)
{
pass[i] = (rand() % 128);
sum += pass;
putchar("%d", pass);
}
putchar("%d", +2772 - sum);
return (0);
}
