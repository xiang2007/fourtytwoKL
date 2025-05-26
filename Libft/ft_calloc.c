#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	int	*dst;

	dst = (int *)malloc(sizeof(int) * (nitems + 1));
	ft_bzero(dst,size);
	dst[size] = '\0';
	return dst;
}