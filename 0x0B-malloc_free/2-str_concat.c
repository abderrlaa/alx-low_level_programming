#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: the the first string to copy from
 * @s2: the the second string to copy from
 * Return: pointer that points to a newly allocated space in memory
*/

char *str_concat(char *s1, char *s2)
{
	int i;
	int strlen1 = 0;
	int strlen2 = 0;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		strlen1++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		strlen2++;
	}

	s = malloc(sizeof(char) * (strlen1 + strlen2) + 1);
	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		s[i] = s1[i];
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		s[strlen1 + i] = s2[i];
	}
	return (s);
}
