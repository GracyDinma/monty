#include "monty.h"

/**
 * getting_stream_failed - Handles the error when reading a file fails.
 * @fileName: The name of the file that failed to open.
 */

void getting_stream_failed(char *fileName)
{
	dprintf(stderr, "Error: Can't open file %s\n", fileName);
	free_arguments();
	exit(EXIT_FAILURE);
}

/**
 * get_stream - get the stream for reading from the specified file.
 * @fileName: Name of the file to open and set as the stream
 */

void get_stream(char *fileNmae)
{
	int fd;

	fd = open(fileName, 0_RDONLY);
	if (fd == -1)
		getting_stream_failed(fileName);

	arguments->stream = fdopen(fd, "r");
	if (arguments->stream == NULL)
	{
		clode(fd);
		getting_stream_failed(fileName);
	}
}
