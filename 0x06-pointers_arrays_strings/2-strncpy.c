#include "main.h"

/**
 * _strncpy - Copis at most an inputted number of
 * bytes fornt string src into dest
 * @dest: The buffer storing the copy.
 * @src: The source string
 * @n: The maximum numner of bytes to copied from src.
 * Return: A pointer to the resulting strng dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; inde++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
