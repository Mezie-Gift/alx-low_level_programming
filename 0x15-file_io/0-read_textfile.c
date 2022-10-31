#include "main.h"

/**
* read_textfile - reads a text file and prints it to the POSIX standard output
* @filename: name of the file to be read
* @letters: is the number of letters it should read and print
*
* Return: the actual number of letters it could read and print or
* 0 if the file cannot be opened or is NULL or does not write
* expected amount of bytes
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)

		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)

		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)

		return (0);

	nrd = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fd);

	free(buf);

	return (nwr);
}
