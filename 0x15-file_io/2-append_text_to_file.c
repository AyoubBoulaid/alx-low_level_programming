#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @text_context: str to add at the end of file
 * @filename: ptr to add to file name
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_context)
{
	int wrt;
	int length = 0;
	int file_descriptor;

	if (filename == NULL) /* checks filename availability*/
	{
		return (-1);
	}

	if (text_context != NULL)
	{
		length = 0;
		while (text_context[length])
		{
			length++;
		}
	}

	/* open filename for writting */
	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	wrt = write(file_descriptor, text_context, length);

	/* wait filename's response */
	if (file_descriptor == -1 || wrt == -1)
	{
		return (-1);
	}
	close(file_descriptor);

	return (1); /* if successful */
}
