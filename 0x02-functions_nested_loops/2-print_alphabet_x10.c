#include <stdio.h>
/**
 * print_alphabet_x10 - Make alphabet x10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
char e;
int i = 0;
while (i <= 9)
{
for (e = 'a'; e <= 'z'; e++)
{
putchar(e);
}
putchar('\n');
i++;
}
}
