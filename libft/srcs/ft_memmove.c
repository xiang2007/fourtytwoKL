#include <stddef.h>

void    *ft_memmove(void *to, const void *from, size_t numBytes)
{
    size_t i;
    char *dest;
    const char *src;

    i = 0;
    dest = (char *)to;
    src = (const char *)from;

    while (i <= numBytes)
    {
        dest[i] = src[i];
        i++;
    }

    return dest;
}