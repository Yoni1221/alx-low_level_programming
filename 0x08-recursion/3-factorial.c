#include "main.h"
#include <stdio.h>

/**
 * factorial - factorial of a specific number
 * @n : parameter integer
 * Return: factorial
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
	return (1);
}
return (n * factorial(n - 1));
}
