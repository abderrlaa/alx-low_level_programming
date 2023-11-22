#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: the caracter to store in the array
 * Return: pointer to the array
*/

char *create_array(unsigned int size, char c)
{
	int i;
	char *s;

	if (size == 0)
	{
		return (NULL);
	}

	s = malloc(sizeof(char) * size);

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
