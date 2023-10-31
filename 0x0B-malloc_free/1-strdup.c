#include"main.h"
#include<stdlib.h>

/**
 * _strdup - returns a pointer to the duplicated string
 * @str: the string to duplicat
 * Return: pointer to new memory
*/
char *_strdup(char *str)
{
	char *duplicat;
	int counte = 0;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		counte++;
	}

	duplicat = malloc(counte * sizeof(char) + 1);
	if (duplicat == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		duplicat[i] = str[i];
	}

	return (duplicat);


}
