#include <stdio.h>
/**
 * main - a program that prints printf function
 *
 * return: 0 always (SUCCESS)
 */
int main(void)
{
	char a;
	int b;
long int c;
long long int d;
float f;
printf("size of char: %zu bytes(S)\n", (unsigned long)sizeof(a));
printf("Size of an int: %zu bytes(S)\n", (unsigned long)sizeof(b));
printf("Size of long int: %zu bytes(S)\n", (unsigned long)sizeof(c));
printf("Size of log long int: %zu bytes(S)\n", (unsigned long)sizeof(d));
printf("Size of float: %zu bytes(S)\n", (unsigned long)sizeof(f));
return (0);
}
