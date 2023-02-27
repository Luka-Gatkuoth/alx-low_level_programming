#include<stdio.h>

/**
* swap_int- a function that swaps the values of two integers.
* @a: The fisrt number to be swapped
* @b: The second number to be swapped
* Return: Nothing
*/
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
