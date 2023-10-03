#include "main.h"
#include <sys/stat.h>
#define BUFFER_SIZE 1024

int main(int argc, char **argv)
{
	int dest_fd, source_fd, content_to_read, content_to_write;
	char buffer[BUFFER_SIZE];
	/*Checking if the nunmber of arguments is not less than 3*/
	if (argc != 3)
	{
		exit(97);
		fprintf(stderr, "Usage: cp %s %s\n", argv[1], argv[2]);
	}

	/*truncate if destination file already exists*/
	dest_fd = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	/*if destination file does not exist*/
	if (dest_fd == -1)
	{
		fprintf(stderr, "Erro: Can't write to %s\n", argv[2]);
		close(dest_fd);
		exit(99);
	}

	/*Channge permissions of destination file*/
	if(chmod(argv[2], 0664) == -1)
	{
		fprintf(stderr, "Error: Can't change permissions of %s\n", argv[2]);
		close(dest_fd);
		exit(1);
	}

	/*Opening source file*/
	source_fd = open(argv[1], O_RDONLY);
	/*if source file does not exist*/
	if (source_fd == -1)
	{
		fprintf(stderr, "Error: Can't read from %s\n", argv[1]);
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
			fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
			close(source_fd);
			close(dest_fd);
			exit(99);
		}
	}
	if (content_to_read == -1)
	{
		fprintf(stderr,"Error: Can't read from %s\n", argv[1]);
		close(source_fd);
		close(dest_fd);
		exit(98);
	}

	/*Closing the files after the operation has ended*/
	close(source_fd);
	close(dest_fd);

	return (0);
}
