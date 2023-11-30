#include"main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of element to allocate
 * Return: a pointer to an array
*/
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);

	if (p == 0)
	{
		exit(98);
	}
	return (p);
}
