#include <stdio.h>
/**
 * main - entry point
 * Description: prints alphabet in lower case followed by a new line
 * Return: 0
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
