#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t num)
{
	size_t	i;
	unsigned char *d;
	const unsigned char *s;
	
	i = 0;
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	while (i < num)
	{
		d[i] = s[i];
		i++;
	}

	return (dest);
}