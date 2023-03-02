#include "main.h"
/**
 * _strncat - a function that concatenates two strings
 *
 * @dest: char pointer variable
 * @src: char pointer variabe
 * @n : byte
 * Return: a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n);
{
int j;
j = 0;
while (j < n && src[j] != '\0')
{
dest[j] = src[j];
j++;
}
while (j < n)
{
dest[j] = '\0';
j++
}
return (dest);
}
