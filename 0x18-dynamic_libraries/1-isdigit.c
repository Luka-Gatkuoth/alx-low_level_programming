#include "main.h"

/**
 *_isdigit - checks if the parameter is the number between 0 to 9.
 * @c: input number.
 * Return: 1 if the number is between (0 to 9), otherwise 0.
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
