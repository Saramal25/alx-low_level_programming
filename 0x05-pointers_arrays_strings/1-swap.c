#include "main.h"
/**
*swap_int - function that swaps the values of the integers.
*@a: this is the firt entry
*@b: thi is the second entry
*Return: Nothing
*/
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
