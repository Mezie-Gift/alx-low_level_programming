#include "main.h"

/**
* create_file - creates a file
* @filename: name of the file that is to be created
* @text_content: is a NULL terminated string to write to the file
*
* Return: 1 on success, -1 on failure (file can not be created,
* file can not be written, write “fails”, etc…)
*/

int create_file(const char *filename, char *text_content)
{
	int fd;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;
	rwr = write(fd, text_content, nletters);

	if (rwr == -1)
		return (-1);

	close(fd);
	return (1);
}
