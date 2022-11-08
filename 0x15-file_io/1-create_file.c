#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */

int create_file(const char *filename, char *text_content)
{
	int count = 0;
	int fdr;
	int ndr;

	if (!filename)
		return (-1);

	fdr = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (fdr == -1)
		return (-1);

	if (!text_content)
		return (1);

	while (text_content[count])
		count++;
	ndr = write(fdr, text_content, count);

	if (ndr == -1)
		return (-1);

	close(fdr);
	return (1);
}
