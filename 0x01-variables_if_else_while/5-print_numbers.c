#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/**
* main- a program that prints the alphabet in lowercase
* Return: 0 (success)
*/
int main(void)
{
char c = '0';
while (c <= '9')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
