#include "main.h"
/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int z = 0;
	int x = 0;

	while (*(src + z) != '\0')
	{
		z++;
	}
	for ( ; x < z; x++)
	{
		dest[x] = src[x];
	}
	dest[z] = '\0';
	return (dest);
}
