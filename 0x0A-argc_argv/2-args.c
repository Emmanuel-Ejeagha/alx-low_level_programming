#include <stdio.h>
/**
 * main - prints all the arguments it recieves
 * @argc: argument count 
 * @argv: argument vector
 *
 * Return: 0 Always
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i < argc; i++)
		printf("%s/n", argv[i]);
	return (0);
}
