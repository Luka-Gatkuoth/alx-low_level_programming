#include "main.h"

/**
* _memcpy - copy the memory areas
* @dest:pointer to return
* @src: source memory areas
* @n: bytes from memory area to copy
* Return: the pointer to the dest.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
