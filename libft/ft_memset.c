#include <stddef.h>

void *ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	unsigned char *p;

	p = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (str);
}