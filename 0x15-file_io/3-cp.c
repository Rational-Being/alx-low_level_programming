#include "main.h"

/**
 * main - funtion copy files
 * @argc:argument count
 * @argv: arg valu
 * Return: 1 0n suces, 0 on fialure
 */

int main(int argc, char *argv[])
{
	char buffer[1024];
	int fdo, fdi, i, len;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO,"Usage: cp file_from file_to\n");
		exit (97);
	}
	
	fdi = open(argv[1], O_RDONLY);
	
	if (fdi == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit (98);
	}

	fdo = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);

	if (fdo == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit (99);
	}

	while (len == 1024)
	{
		len = read(fdi, buffer, sizeof(buffer));
		if (len == -1)
		{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit (98);
		}
		
		i = write(fdo, buffer, len);
		if (len > 0)
		{

		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit (99);
	}
	}

	len = close(fdi);
	if (len == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdi);
		exit (100);
	}

	i = close(fdo);
	if (i == -1)

	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdo);
		exit (100);
	}

	return (0);
}
