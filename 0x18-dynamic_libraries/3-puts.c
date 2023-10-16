#include "main.h"
/**
*_puts - prints a str, followed by the new line,
* @str: pointer to the strings to be printed
* Return: void
*/

void _puts(char *str)
{
int index = 0;
while (str[index])
{
_putchar(str[index]);
index++;
}
_putchar('\n');
}
