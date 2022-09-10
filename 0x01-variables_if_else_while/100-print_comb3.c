#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * differnt combinations of two digits
 * Numbers must be separated by ,, followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * you can only use the putchar function
 * Numbers should be in ascending order, with two digits
 * you are not allowed to use any variable of type char
 * Description: prints possible combination of 2 digits
 * Return: 0
 */
int main(void)
{
int c;
int d = 0;
while (d < 10)
{
c = 0;
while (c < 10)
{
if (d != c && d < c)
{
putchar('0' + d);
putchar('0' + c);
if (c + d != 17)
{
putchar(',');
putchar(' ');
}
}
c++;
}
d++;
}
putchar('\n');
return (0);
}
