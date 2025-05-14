#include <stddef.h>

void *ft_bzero(void *str, size_t n)
{
	size_t i;
	unsigned char *p;

	i = 0;
	p = (unsigned char *)str;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
	return str;
}