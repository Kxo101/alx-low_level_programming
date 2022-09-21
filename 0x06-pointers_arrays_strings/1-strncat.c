#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: bytes from src the function will use
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int ls, ld;

	ld = _strlen(dest);
	ls = _strlen(src) - 1;
	if (n < ls)
		ls = n;

	while (ls >= 0)
	{
		*(dest + ld + ls) = *(src + ls);
		ls--;
	}
	*(dest + _strlen(dest)) = '\0';

	return (dest);
}
