#include"main.h"
#include<stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: pointer that points to a newly allocated space in memory
*/
char *str_concat(char *s1, char *s2)
{
	int i;
	int strc1 = 0;
	int strc2 = 0;
	char *cat;

	if (s1 == NULL)
	{
		return (NULL);
	}
	if (s2 == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		strc1++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		strc2++;
	}

	cat = malloc(sizeof(char) * (strc1 + strc2) + 1);
	if (cat == NULL)
	{
		return (NULL);
	}


	for (i = 0; s1[i] != '\0'; i++)
	{
		cat[i] = s1[i];
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		cat[strc1 + i] = s2[i];
	}
	return (cat);
}
