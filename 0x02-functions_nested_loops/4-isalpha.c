#include "main.h"

/**
 * _isalpha - check for alphabetic character
 * @c: is the char to be checked
 * Return: 1 if char is a letter, lowercase or uppercase ,otherwise 0.
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
return (1);
else
return (0);
}
