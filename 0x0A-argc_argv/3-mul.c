#include<stdlib.h>
/**
 * main -  prints the result of the multiplication, followed by a new line
 * @argc: argument count
 * @argv: arguments vector
 * Return: 0
*/
int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(*argv + 1) * atoi(argv + 2));
	return (0);
}
