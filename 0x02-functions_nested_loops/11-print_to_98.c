#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - all natural nums from n to 98
 * @n: the num to start printing from
 * Return: always 0
 */
void print_to_98(int n)
{
if (n <= 98)
{
for (; n <= 98; n++)
{
if (n == 98)
{
printf("%d", n);
printf("\n");
break;
}
else
{
for (; n >= 98; n--)
{
if (n == 98)
{
printf("%d", n);
printf("\n");
break;
}
else
{
printf("%d", n);
}
}
}
}
}
}
