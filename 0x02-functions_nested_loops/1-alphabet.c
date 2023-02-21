#include "main.h"
/**
* print_alphabet - Entry point
* Description: prints the alphabet in small caps
* Return: Always 0 (Success)
*/

void print_alphabet(void);
{
char c = 'a';
while (c <= 'z')
{
_putchar (c);
c++;
}
_putchar ('\n');

}
