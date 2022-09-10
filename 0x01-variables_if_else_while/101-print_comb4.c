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
int n, m, l;
for (n = 48; n < 58; n++)
{
for (m = 49; m < 58; m++)
{
for (l = 50; l < 58; l++)
{
if (l > m && m > n)
{
putchar(n);
putchar(m);
putchar(l);
if (n != 55 || m != 56)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
