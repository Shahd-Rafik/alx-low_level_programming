#include "main.h"

/**
 * _isdigit - checks if input is digit between 0 to 9
 *
 * @c: input
 *
 * Return: 1 if its digit, 0 otherwise
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
return (0);
}
