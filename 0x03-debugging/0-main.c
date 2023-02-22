#include "main.h"

/**
 * main - Test function for positive or negative
 * Return: 0
 */
 int main(void)
 {
int i;
i = 0;
 
if (i > 0)
{
printf("%d is positive\n", i);
}
else if (i == 0)
{
printf("%d is zero\n", i);
}
else
{
printf("%d is negative\n", i);
}
return (0);
}
