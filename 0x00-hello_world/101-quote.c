#include <stdio.h>
#include <unistd.h>
/*
 * main - Entry
 * return: 1
 */
int main(void)
{
	write(2, "and that piece of art is usefu\"  - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
