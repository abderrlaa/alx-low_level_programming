#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: the array to copy from
 * Return: pointer to the array
*/

char *_strdup(char *str)
{
	int i;
	int strlen = 0;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		strlen++;
	}

	s = malloc(sizeof(char) * strlen + 1);
	if (s == NULL)
	{
		return (NULL);
	}


	for (i = 0; str[i] != '\0'; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
