#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include "ft_check.h"

#define BUF_SIZE 6

int check(int argc);

int	main(int argc, char *argv[])
{
	char c[BUF_SIZE];
	int fd;
	int nb;
	ssize_t numread;

	nb = check(argc);
	fd = open(argv[1],O_RDONLY);
	if (nb == 2 && fd != -1)
	{
		numread = read(fd, c, BUF_SIZE - 1);
		while (numread > 0)
		{
			write(1, c, numread);
			write(1, "\n", 1);
			numread = read(fd, c, BUF_SIZE - 1);
		}
	}
	if (nb != 2)
		return 0;
	if (fd == -1)
	{
		write(1, "Cannot read file", 17);
		write(1, "\n", 1);
		return 0;
	}
}