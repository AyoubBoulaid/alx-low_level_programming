#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @letters: how many letters that will be read
 * @filename: the file that will be read
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t byte_read;
	ssize_t byte_write;
	ssize_t file_descriptor;
	char *text_buffer;

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
	{
		return (0);
	}

	text_buffer = malloc(sizeof(char) * letters); /*allocate mem for txt buffer*/
	byte_read = read(file_descriptor, text_buffer, letters); /*read file to buf*/

	byte_write = write(STDOUT_FILENO, text_buffer, byte_read); /*output the written read text*/

	free(text_buffer); /* free allocated memory */
	close(file_descriptor); /* close the file */

	return (byte_write); /* return the number of bytes written */
}
