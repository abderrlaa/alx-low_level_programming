#include "main.h"

/**
 * argstostr -  concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: array of arguments
 * Return: a pointer to an array
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int i, j, count = 0, len = 0;

	if (ac == 0 || av == 0)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}

	}
	len += ac;

	s = malloc(sizeof(char) * len + 1);

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[count] = av[i][j];
			count++;
		}
		s[count++] = '\n';

	}
	return (s);
}
