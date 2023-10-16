#include "main.h"

/**
*_strlen - find the length of the strings
* @s: pointer to the strings to be check
* Return: void
*/

int _strlen(char *s)
{
int count = 0;
while (s[count])
count++;
return (count);
}
