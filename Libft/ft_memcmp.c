#include <stddef.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t size)
{
	size_t	i;
	const char	*s;
	const char	*d;

	i = 0;
	s = (const char *)s1;
	d = (const char *)s2;
	while (i < size)
	{
		if (s[i] != d[i])
			return (s[i] - d[i]);
		i++;
	}

	return (0);
}