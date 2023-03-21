#include "main.h"

/**
 * print_sign - print the sign of a number
 * @n: is the char to be checked
 * Return:1 for positive num ,Returns:-1 for negative num ,Returns:0 otherwise
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(45);
return (0);
}
}
