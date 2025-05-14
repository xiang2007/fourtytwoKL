#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int main()
{
    int j = 0;
    char str[] = "gEEkS@123\n";
    char ch;

    while (str[j]) {
        ch = str[j];
        putchar(ft_tolower(ch));
        j++;
    }

    return 0;
}