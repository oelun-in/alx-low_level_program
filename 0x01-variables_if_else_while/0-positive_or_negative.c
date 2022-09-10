#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * Description: prints a random number and tell if it is positive or not
 * Return: 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/*your code goes here*/
if (n > 0)
/*your code goes here*/
 printf("%d is positive\n", n);
/*your code goes here*/
else if (n < 0)
/*your code goes here*/
 printf("%d is negative\n", n);
/*your code goes here*/
else
/*your code goes here*/
 printf("%d is zero\n", n);
return (0);
}
