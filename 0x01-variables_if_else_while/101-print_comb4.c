#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Description: different combination of numbers
 * Return: 0
 * The numbers should range from 0 to 99
 * the two numbers should be separated bu a space
 * all numbers should bve printed with two digits. 1 should be printed as 01
 * the combination of numbers must be separated by comma, followed by a space
 * the combinations of numbers should be printed inascending order
 * you can only use putchar eight times maximum in your code
 * you are not allowed to use any variable type char
 */
int main(void)
{
int c;
int d;
int e = 0;
while (e < 10)
{
d = 0;
while (d < 10)
{
c = 0;
while (c < 10)
{
if (c != d && d != e && e < d && d < c)
{
putchar('0' + e);
putchar('0' + d);
putchar('0' + c);
if (c + d + e != 9 + 8 + 7)
{
putchar(',');
putchar(',');
}
}
c++;
}
d++;
}
e++;
}
putchar('\n');
return (0);
}
