#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Description: prints combinations
 * Return: 0
 */
int main(void)
{
int i, y;
for (i = 0; i < 10; i++)
{
putchar(i + '0');
}
for (y = 'a'; y <= 'f'; y++)
{
putchar (y);
}
putchar('\n');
return (0);
}
