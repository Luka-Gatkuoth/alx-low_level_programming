#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
* main- get a random number and check it last digit , compared with 5
* Return: 0 (success)
*/
int main(void)
{
int n;
int num;

srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit is %d", n);
num = n % 10;

if  (num > 5)
{
printf("%d is greater than 5\n", num);
}
else if ((num < 6) && (num < 0))
{
printf(" %d is less than 6 and not 0\n", num);
}
else
{
printf("%d is 0\n", num);
}

return (0);
}
