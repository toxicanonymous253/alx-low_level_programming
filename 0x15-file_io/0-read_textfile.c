# include "main.h"

/*What t0 do*/
/*1) read letters it should read and print*/
/*2) returns the actual number of letters it could read and print*/
/*3) if the file cannot be opened / read return 0*/
/*4) if filename is NULL return 0*/
/*5) write fails return 0*/
/**
 * read_textfile - function that reads a text file and prints it to the
 * POSIX standard output
 * @filename: this is the file to be read
 * @letters: number of letters
 * Return: actuall number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, content_read, content_written;
	/*buffer to store the words*/
	char *buffer;

	/*Check if filename exists*/
	if (filename == NULL)
	{
		return (0);
	}
	/*open the file using open()*/
	fd = open(filename, O_RDONLY);

	/*if file fails to open*/
	if (fd == -1)
	{
		return (0);
	}

	/*allocate mem for the content*/
	buffer = malloc(sizeof(char) * letters);

	/*checking if mem has been allocated*/
	if (buffer == NULL)
	{
		return (0);
	}

	/*read data from an open file*/
	content_read = read(fd, buffer, letters);

	if (content_read == -1)
	{
		free(buffer);
		return (0);
	}

	/*writing the contents of the file on the console*/
	content_written = write(STDOUT_FILENO, buffer, letters);

	if (content_written == -1)
	{
		free(buffer);
		return (0);
	}
	/*Free memory*/
	free(buffer);
	/*close the file when done with it*/
	close(fd);
	/*output content of the file*/
	return (content_written);
}
