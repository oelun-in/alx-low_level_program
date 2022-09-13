#include "main.h"
/**
 * main - entry point
 * print_alphabet - prints alphabets in lowercase from a-z
 * Return: Always success
 */
void print_alphabet(void)
{
char alpha = 'a';
while (alpha <= 'z')
{
_putchar(alpha);
alpha++;
}
_putchar('\n');
}
