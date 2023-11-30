#include "main.h"

char **strtow(char *str)
{
	char **s;
	int i, j, string = 0;

	if (str == NULL || str == "")
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && str[i + 1] == ' ' || str[i + 1] == '\0' )
		{
			string++;
		}
		
	}
	
	s = malloc(sizeof(char *) * string);

	for (i = 0; i <; i++)
	{
		/* code */
	}
	
	
}