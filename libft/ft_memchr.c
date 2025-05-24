#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n);

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	const unsigned char *cptr = (const unsigned char *)s;

	i = 0;
	while (i < n)
	{
		if ((char)cptr[i] == (char)c)
			return ((void *)(cptr + i));
		i++;
	}

	return (NULL);
}