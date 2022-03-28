#include "main.h"

/**
 * read_textfile - function read the text
 *
 * @filename: pointer const char
 * @letters: size_t
 * Return: fw
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, fr, fw;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	fr = read(fd, buf, letters);
	if (fr == -1)
		return (0);

	buf[fr] = '\0';

	close(fd);

	fw = write(STDOUT_FILENO, buf, fr);
	if (fw == -1)
		return (0);

	free(buf);
	return (fw);
}
