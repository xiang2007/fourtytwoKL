#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		write(1, "File name missing.\n", 19);
		return (1);
	}
	if (argc > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (1);
	}
	int fd = open(argv[1],O_RDONLY);
	if (fd == -1)
	{
		write(1, "Cannot read file\n", 18);
		return (1);
	}
}