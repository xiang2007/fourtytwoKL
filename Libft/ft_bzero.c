#include <stddef.h>

void	ft_bzero(void *str, size_t size)
{
	size_t i;
	unsigned char *s;

	i = 0;
	s = (unsigned char *)str;
	while (i < size)
	{
		s[i] = 0;
		i++;
	}
}