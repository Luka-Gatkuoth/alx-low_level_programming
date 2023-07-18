#include"main.h"
/**
*main- a program that prints _putchar, followed by a new line
*Return: 0 (success)
*/
int main(void)
{
char x[] = "_putchar";
int i;
for (i = 0; x[i]; i++)
_putchar(x[i]);
_putchar('\n');
return (0);
}

