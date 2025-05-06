#include <fcntl.h>
#include <unistd.h>

void	ft_putstr_fd(char *str, int fd)
{
	int i;

	i = 0;
	while (str[i])
		write(fd, &str[i++], 1);
}

void	ft_file_display(char *filename)
{
	int fd;
	int bytes_read;
	char buffer[1024];

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		ft_putstr_fd("Cannot read file.", fd);
	else
	{
		bytes_read = read(fd, buffer, 1024);
		while (bytes_read > 0)
		{
			write(1, buffer, bytes_read);
			bytes_read = read(fd, buffer, 1024);
		}
		close(fd);
	}
}

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_putstr_fd("File name missing.", 2);
		write(1, "\n", 1);
	}
	else if (argc > 2)
	{
		ft_putstr_fd("Too many arguments.", 2);
		write(1, "\n", 1);
	}
	else
	{
		ft_file_display(argv[1]);
		write(1, "\n", 1);
	}
	return 0;
}