#include "main.h"

/**
* _strchr - locate the character in the string
* @s: source strings
* @c: character to find
* Return: the string from characters found
*/

char *_strchr(char *s, char c)
{
int a = 0, b;
while (s[a])
{
a++;
}
for (b = 0; b <= a; b++)
{
if (c == s[b])
{
s += b;
return (s);
}
}
return ('\0');
}
