#include "main.h"

/**
* _strpbrk - The entry points
* @s: inputs
* @accept: input
* Return: Always 0 if Success
*/
char *_strpbrk(char *s, char *accept)
{
int k;
while (*s)
{
for (k = 0; accept[k]; k++)
{
if (*s == accept[k])
return (s);
}
s++;
}
return ('\0');
}
