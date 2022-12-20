#include "stdio.h"
#include <stdlib.h>
#include <time.h>
/**
*main - progress that generates random valid
`*Return: Always 0 (Success)
*/
int main(void)
{
int pass, sum;
srand(time(NULL));
sum = 0;
while (sum <= 2645)
{
pass = (rand() % 128);
sum += pass;
printf("%d", pass);
}
printf("%d", 2772 - sum);
return (0);
}
