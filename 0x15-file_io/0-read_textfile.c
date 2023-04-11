#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX
 * standard output
 * @filename: name of file
 * @letters: the number of letters it should read and print
 * Return: text
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
char *buff;
ssize_t des, rc, wc;

if (!filename)
return (0);
des = open(filename, O_RDONLY);
if (des < 0)
return (0);

buff = malloc(sizeof(char) * letters);
if (!buff)
{
close(des);
return (0);
}

rc = read(des, buff, letters);
close(des);
if (rc <= 0)
{
free(buff);
return (0);
}

wc = write(STDOUT_FILENO, buff, rc);
free(buff);
if (wc < 0)
return (0);

return (wc);
}
