#include<stdio.h>
/**
* main- a program that prints the alphabet in lowercase, and then in uppercase
* Return: 0  (success)
*/
int main(void)
{
char c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
c = 'A';
while (c <= 'Z')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
