#include <stddef.h>
#include <stdlib.h>

void	*ft_calloc(size_t nitems, size_t size)
{
	int	*dst;
	int	i;

	dst = (int *)malloc(sizeof(int) * (nitems + 1));
	while (i < size)
	{
		dst[i] = 0;
		i++;
	}

	dst[size] = '\0';
	return dst;
}