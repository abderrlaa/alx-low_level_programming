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
		s1len = 0;
	}
	if (s2 == NULL)
	{
		s2len = 0;
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		s1len++;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		s2len++;
	}
	if (s2len > n)
	{
		s2len = n;
	}
	
	s = malloc(s1len + s2len + 1);
	for (i = 0; s1[i] != '\0'; i++)
	{
		s[i] = s1[i];
	}
	for (j = 0; j < s2len; j++)
	{
		s[s1len + j] = s2[j];
	}
	s[s1len + s2len] = '\0';
	return (s);
}
