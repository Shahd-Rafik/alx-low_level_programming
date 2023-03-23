#include "main.h"
/**
* postitive_or_negative: tests function that prints if int is + or -
* @i: int tested
* Return: 0
*/

void positive_or_negative(int i)
{
if (i > 0)
{ printf("%d is positive\n", i); }
else if (i < 0)
{ printf("%d is negative\n", i); }
if (i == 0)
{ printf("%d is zero\n", i); }
}
