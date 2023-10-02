#include "main.h"
#include <stdio.h>

#define USAGE "Usage: cp file_from file_to\n"
#define ERROR_NOREAD "Error: Can't read from file %s\n"
#define ERROR_NOWRITE "Error: Can't write to %s\n"
#define ERROR_NOTCLOSE "Error: Can't close fd %d\n"
#define PERMIS (S_IWUSR | S_IRUSR | S_IRGRP | S_IWGRP | S_IROTH)
/**
*main - program
*Return:0
*@ac:parameter
*@av:argument
*/
int main(int ac, char **av)
{
int from_fd = 0, to_fd = 0;
ssize_t bytes;
char buf[READ_BUF_SIZE];
if (ac != 3)
dprintf(STDERR_FILENO, USAGE), exit(97);
from_fd = open(av[1], O_RDONLY);
if (from_fd == -1)
dprintf(STDERR_FILENO, ERROR_NOREAD, av[1]), exit(98);
to_fd = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMIS);
if (to_fd == -1)
dprintf(STDERR_FILENO, ERROR_NOWRITE, av[2]), exit(99);
while ((bytes = read(from_fd, buf, READ_BUF_SIZE)) > 0)
if (write(to_fd, buf, bytes) != bytes)
dprintf(STDERR_FILENO, ERROR_NOWRITE, av[2]), exit(99);
if (bytes == -1)
dprintf(STDERR_FILENO, ERROR_NOREAD, av[1]), exit(98);
from_fd = close(from_fd);
to_fd = close(to_fd);
if (from_fd)
dprintf(STDERR_FILENO, ERROR_NOTCLOSE, from_fd), exit(100);
if (to_fd)
dprintf(STDERR_FILENO, ERROR_NOTCLOSE, to_fd), exit(100);
return (EXIT_SUCCESS);
}
