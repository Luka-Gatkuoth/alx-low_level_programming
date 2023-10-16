#include "main.h"

/**
* *_strcpy -  copies the string pointed to by the src
* @dest: char type strings
* @src: char type strings
* Description: Copy string pointed to by pointer `src` to
* the buffer pointed to by `dest`
* Return: Pointer to `dest`
*/

char *_strcpy(char *dest, char *src)
{
int index = -1;
do {
index++;
dest[index] = src[index];
} while (src[index] != '\0');
return (dest);
}
