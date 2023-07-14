#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/**
* main- a program that prints the alphabet in lowercase
* Return: 0 (success)
*/
int main(void)
{
char c = 'a';
while (c <= 'z')
{
if (c != 'e' && c != 'q')
{
putchar(c);
}
c++;
}
putchar('\n');
return (0);
}

