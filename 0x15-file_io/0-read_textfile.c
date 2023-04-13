#include "main.h"

/**
 * read_textfile: a funtion that reads a text file and
 * prints it to the standard outout
 * @filename: the name of file
 * @letters: the number of letters to be printed and read
 * Return: the actual number of letters it prints and reads
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t fdr, fdw;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (buffer == NULL)
		return (0);

	fdr = read(fd, buffer, letters);
	if (fdr < 0)
	{
		free(buffer);
		return (0);
	}
	fdw = write(STDOUT_FILENO, buffer, fdr);

	if (fdw < 0)
		return (0);
	close (fd);
	free(buffer);

	return (fdw);
}

