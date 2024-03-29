#include "main.h"
#include <sys/stat.h>
#define BUFFER_SIZE 1024
int main(int argc, char **argv)
{
	int dest_fd, source_fd, content_to_read, content_to_write, check;
	char buffer[BUFFER_SIZE];
	/*Checking if the nunmber of arguments is not less than 3*/
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/*truncate if destination file already exists*/
	dest_fd = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	/*if destination file does not exist*/
	if (dest_fd == -1)
	{
		dprintf(STDERR_FILENO, "Erro: Can't write to %s\n", argv[2]);
		close(dest_fd);
		exit(99);
	}
	/*Channge permissions of destination file*/
	if (chmod(argv[2], 0664) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't change permissions of %s\n", argv[2]);
		close(dest_fd);
		exit(1);
	}
	/*Opening source file*/
	source_fd = open(argv[1], O_RDONLY);
	/*if source file does not exist*/
	if (source_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
		close(source_fd);
		close(dest_fd);
		exit(98);
	}
	/*read from the source file and copy data*/
	while ((content_to_read = read(source_fd, buffer, BUFFER_SIZE)) > 0)
	{
		content_to_write = write(dest_fd, buffer, content_to_read);

		if (content_to_write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(source_fd);
			close(dest_fd);
			exit(99);
		}
	}
	if (content_to_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
		close(source_fd);
		close(dest_fd);
		exit(98);
	}
	/*Closing the files after the operation has ended*/
	check = close(source_fd);
	/*if file cannot be closed*/
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source_fd);
		exit(100);
	}
	/*if file cannot be closed*/
	check = close(dest_fd);
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_fd);
	}
	return (0);
}
