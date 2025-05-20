#include <stddef.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	d;
	size_t	s;

	i = 0;
	d = ft_count(dest);
	s = ft_count(src);
	if (size == 0)
		return (s);
	while (src[i] && i < size - 1)
	{
		dest[d] = src[i];
		i++;
		d++;
	}

	dest[d] = '\0';
}

int	ft_count(char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}