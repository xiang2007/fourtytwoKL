#include <stdio.h>
#include <string.h> // Only for comparison, not used in ft_strchr
#include <stdlib.h>
#include <string.h>

// Your custom ft_strchr function prototype
char	*ft_chrstr(const char *src, int	c);

void run_test(const char *str, int c, const char *desc)
{
    char *result = ft_strchr(str, c);
    if (result)
        printf("%-40s -> Found '%c' at position %ld: \"%s\"\n",
               desc, (char)c, result - str, result);
    else
        printf("%-40s -> Character '%c' not found.\n", desc, (char)c);
}

int main(void)
{
    run_test("Hello, world!", 'w', "Middle character");
    run_test("OpenAI", 'O', "First character");
    run_test("ChatGPT", 'T', "Last character");
    run_test("abcdef", 'z', "Character not found");
    run_test("end", '\0', "Search for null terminator");

    run_test("", 'a', "Empty string, non-null search");
    run_test("", '\0', "Empty string, null terminator");

    run_test("aaaaaa", 'a', "Repeated characters");
    run_test("space test", ' ', "Whitespace search");

    // Stress test
    char *long_str = malloc(100001);
    memset(long_str, 'x', 100000);
    long_str[99999] = 'z';
    long_str[100000] = '\0';
    run_test(long_str, 'z', "Very long string, character at end");
    free(long_str);

    char test_with_nonprintable[] = "abc\7def";
    run_test(test_with_nonprintable, '\7', "Non-printable character");

    run_test("nonempty", '\0', "Search null using int");

    return 0;

}


char	*ft_chrstr(const char *src, int	c)
{
	int	i;
	int	size;

	i = 0;
	if (src[i] == '\0')
		return NULL;
	while (src[i])
	{
		if (src[i] == (char)c)
			return (char *)&src[i];
		i++;
	}

	return NULL;

}