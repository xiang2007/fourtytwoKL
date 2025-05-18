#include <stddef.h>

size_t	ft_count(const char *str);

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	int	s;

	i = 0;
	s = ft_count(src);
	if (size == 0)
		return s;
	while(i < size - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}

	dst[i] = '\0';
	return (s);
}

size_t	ft_count(const char *str)
{
	size_t i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}