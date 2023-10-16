#include "main.h"
#include <stdio.h>
/**
 * _isupper - check if character, c  is the upper or not
 * @c: input for the character
 *
 * Return: 1 if its uppercase, otherwise 0 
*/

int _isupper(int c)
{
if (c >= 65 && c <= 90)
return (1);
else
return (0);
}
