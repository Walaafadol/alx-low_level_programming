#include "main.h"
/**
*_strlen - program
*Return:0
*@s:argument
*/


int _strlen(char *s)
{
int i = 0;
if (!s)
return (0);
while (*s++)
i++;
return (i);
}

/**
*append_text_to_file - program
*Return:0
*@text_content:argument
*@filename:argument
*/
int append_text_to_file(const char *filename, char *text_content)
{
ssize_t bytes = 0, len = _strlen(text_content);
int fd;
if (!filename)
return (-1);
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);
if (len)
bytes = write(fd, text_content, len);
close(fd);
return (bytes == len ? 1 : -1);
}
