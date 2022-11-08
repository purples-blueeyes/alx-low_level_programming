#include "main.h"

/**
 * read_textfile - A function that reads a text file and prints
 * to the POSIX STDOUT
 * @filename: The filename to open
 * @letters: The number of letters to read and print
 *
 * Return: The number of letters read and printed, or 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *temp;
	int fdr;
	ssize_t nrd, nwr;

	if (!filename)
		return (0);

	fdr = open(filename, O_RDONLY);

	if (fdr == -1)
		return (0);

	temp = malloc(sizeof(char) * (letters));

	if (!temp)
		return (0);

	nrd = read(fdr, temp, letters);
	nwr = write(STDOUT_FILENO, temp, nrd);

	close(fdr);

	free(temp);

	return (nwr);
}
