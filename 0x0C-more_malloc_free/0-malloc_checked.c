#include"main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of element to allocate
 * Return: a pointer to an array
*/
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(sizeof(int) * b);

	if (p == NULL)
	{
		exit(98);
	}

}
