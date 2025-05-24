#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int    ft_count(char const *str);

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	size;
	char	*dest;

	i = 0;
	if(!s)
		return (NULL);
	size = ft_count(s);
	if (start == len || start > size || len == 0 ||
		start >= len)
		return (NULL);
	dest = (char *)malloc(sizeof(char)* (len + 1));
	while (i < len)
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[len] = '\0';
	return (dest);
}

int    ft_count(char const *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
#include <stdio.h>
#include <stdlib.h>

// Your function prototype
char *ft_substr(char const *s, unsigned int start, size_t len);

void run_substr_test(const char *s, unsigned int start, size_t len)
{
    char *result = ft_substr(s, start, len);
    printf("\nft_substr(\"%s\", %u, %zu) => \"%s\"",
           s ? s : "NULL", start, len, result ? result : "NULL");
    free(result);
}

int main(void)
{
    run_substr_test("Hello, World!", 0, 5);     // "Hello"
    run_substr_test("Hello, World!", 7, 5);     // "World"
    run_substr_test("abcdef", 2, 3);            // "cde"
    run_substr_test("abc", 5, 2);               // "" (start too large)
    run_substr_test("abcde", 3, 10);            // "de"
    run_substr_test("abc", 1, 0);               // "" (len = 0)
    run_substr_test("", 0, 5);                  // "" (empty input)
    run_substr_test("OpenAI", 0, 4);            // "Open"
    run_substr_test("Complete", 0, 100);        // "Complete"
    run_substr_test("  Trim me  ", 2, 7);       // "Trim me"
    run_substr_test(NULL, 0, 5);                // NULL (optional handling)

    printf("\n\nAll ft_substr tests finished.\n");
    return 0;
}
