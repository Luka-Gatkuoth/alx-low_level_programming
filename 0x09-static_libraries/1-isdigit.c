#include"main.h"
/**
* _isdigit- A function that checks for a digit (0 through 9)
* @x: The number to be checked
* Return: 1 if the character is the digit otherwise 0
*/

int _isdigit(int x)
{
if (x >= 48 && x <= 57)
{
return (1);
}
return (0);
}
