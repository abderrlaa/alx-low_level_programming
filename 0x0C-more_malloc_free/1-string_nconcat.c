#include "main.h"
/**
 * string_nconcat - concatenates 2 srtings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * @n: number of bytes to copy from the second string
 * Return: pointer shall point to a newly allocated space in memory
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	int i, j, s1len = 0, s2len = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (s1len = 0; s1[s1len] != '\0'; s1len++)
	{
		;
	}
	for (s2len = 0; s2[s2len] != '\0'; s2len++)
	{
		;
	}
	if (n >= s2len)
	{
		s = malloc(s1len + s2len + 1);
	}
	else
	{
		s = malloc(s1len + n + 1);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		s[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		s[i] = s2[j];
		i++;
	}
	s[i] = '\0';
	return (s);
}
