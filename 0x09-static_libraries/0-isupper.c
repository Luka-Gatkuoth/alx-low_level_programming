#include"main.h"
/**
*_isupper- A function that checks for uppercase character
*@x: The number to be checked
*Return: 1 if letter is uppercase 0 otherwise
*/

int _isupper(int x)
{
if (x >= 65 && x <= 90)
{
return (1);
}
return (0);
}
