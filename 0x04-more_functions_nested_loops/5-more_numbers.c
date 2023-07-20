#include"main.h"
/**
* more_numbers- a function that prints 10 times the numbers, from 0 to 14
* Return: 10 time of number since 0 through 9
*/

void more_numbers(void)
{
int x, y;

for (x = 0; x < 10; x++)
{
for (y = 0; y < 15; y++)
{
if (y >= 10)
_putchar((y / 10) + '0');
_putchar((y % 10) + '0');
}
_putchar('\n');
}
}
