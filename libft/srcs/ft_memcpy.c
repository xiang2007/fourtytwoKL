#include <stddef.h>

void *ft_memcpy (void *dest,const void *src, size_t num)
{
    size_t i;
    char *d;
    const char *s;

    d = (char *)dest;
    s = (const char *)src;

    i = 0;
    while (i < num)
    {
        d[i] = s[i];
        i++;
    }

    return dest;
}