#include "main.h"

/**
 * _memcpy -  function that copies memory area.
 * @dest: destino de primer buffer.
 * @src: valor de segundo buffer.
 * @n: number.
 * Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
