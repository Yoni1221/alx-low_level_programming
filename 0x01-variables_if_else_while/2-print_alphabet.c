#include <stdio.h>
#include <ctype.h>
/**
* main - Entry point
*
* Return: Always 0 (success)
*/
int main(void)
{
char c;
char space = '\n';
for (c = 'A' ; c <= 'Z' ; c++)
{
putchar(tolower(c));
}
putchar(space);
return (0);
}
