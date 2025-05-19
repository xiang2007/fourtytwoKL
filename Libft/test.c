#include <stdio.h>

#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "libft.h" // Replace with your libft header

#define BUF_SIZE 100

void print_nonprintable(char *s, size_t len) {
	for (size_t i = 0; i < len; i++)
		printf("%c", s[i] ? s[i] : '.');
	printf("\n");
}

int main(void)
{
	// isalpha, isdigit, isalnum, isascii, isprint
	char test_chars[] = {'A', 'z', '1', '!', '\t', 127, -1, 0, ' '};
	printf("=== Character Checks ===\n");
	for (size_t i = 0; i < sizeof(test_chars); i++) {
		char c = test_chars[i];
		printf("char '%c' (%d):\n", c, c);
		printf("  isalpha: ft = %d, libc = %d\n", ft_isalpha(c), isalpha(c));
		printf("  isdigit: ft = %d, libc = %d\n", ft_isdigit(c), isdigit(c));
		printf("  isalnum: ft = %d, libc = %d\n", ft_isalnum(c), isalnum(c));
		printf("  isascii: ft = %d, libc = %d\n", ft_isascii(c), ft_isascii(c));
		printf("  isprint: ft = %d, libc = %d\n", ft_isprint(c), isprint(c));
	}

	//strlen
	printf("\n=== strlen ===\n");
	char *len_tests[] = {"", "a", "abc", "abcdefghijklmnopqrstuvwxyz", NULL};
	for (int i = 0; len_tests[i]; i++)
		printf("  \"%s\": ft = %lu, libc = %lu\n", len_tests[i], (unsigned long)ft_strlen(len_tests[i]), (unsigned long)strlen(len_tests[i]));

	// memset and bzero
	printf("\n=== memset / bzero ===\n");
	char a[BUF_SIZE], b[BUF_SIZE];
	memset(a, 'A', BUF_SIZE);
	memset(b, 'A', BUF_SIZE);
	ft_memset(a, 'B', 10);
	memset(b, 'B', 10);
	printf("memset test: ");
	print_nonprintable(a, 15);

	//memset(a, 'A', BUF_SIZE);
	memset(b, 'A', BUF_SIZE);
	ft_bzero(a, 10);
	bzero(b, 10);
	printf("bzero test: ");
	print_nonprintable(a, 15);

	// memcpy & memmove
	printf("\n=== memcpy / memmove ===\n");
	char dst1[50], dst2[50];
	char *src = "1234567890abcdefghijklmnopqrstuvwxyz";
	ft_memcpy(dst1, src, 20);
	memcpy(dst2, src, 20);
	printf("memcpy match: %d\n", memcmp(dst1, dst2, 20));

	/*strcpy(dst1, "memmove overlap test");
	strcpy(dst2, "memmove overlap test");
	ft_memmove(dst1 + 5, dst1, 10);
	memmove(dst2 + 5, dst2, 10);
	printf("memmove result match: %d\n", memcmp(dst1, dst2, 20));

	// strlcpy & strlcat
	printf("\n=== strlcpy / strlcat ===\n");
	char c1[20], c2[20];
	size_t r1 = ft_strlcpy(c1, "HelloLibft", 6);
	size_t r2 = strlcpy(c2, "HelloLibft", 6);
	printf("strlcpy: ft = %s (%lu), libc = %s (%lu)\n", c1, r1, c2, r2);

	strcpy(c1, "Hi ");
	strcpy(c2, "Hi ");
	r1 = ft_strlcat(c1, "there!!!", sizeof(c1));
	r2 = strlcat(c2, "there!!!", sizeof(c2));
	printf("strlcat: ft = %s (%lu), libc = %s (%lu)\n", c1, r1, c2, r2);

	// toupper / tolower
	printf("\n=== toupper / tolower ===\n");
	for (int i = -5; i < 130; i++) {
		if (ft_toupper(i) != toupper(i) || ft_tolower(i) != tolower(i))
			printf("Mismatch at %d\n", i);
	}
	printf("toupper/tolower passed all checks.\n");

	// strchr / strrchr
	printf("\n=== strchr / strrchr ===\n");
	char *str = "banana";
	printf("strchr('a'): ft = %s, libc = %s\n", ft_strchr(str, 'a'), strchr(str, 'a'));
	printf("strrchr('a'): ft = %s, libc = %s\n", ft_strrchr(str, 'a'), strrchr(str, 'a'));

	// strncmp
	printf("\n=== strncmp ===\n");
	char *x1 = "abc", *x2 = "abd";
	printf("ft = %d, libc = %d\n", ft_strncmp(x1, x2, 2), strncmp(x1, x2, 2));
	printf("ft = %d, libc = %d\n", ft_strncmp("test", "testing", 5), strncmp("test", "testing", 5));

	// memchr / memcmp
	printf("\n=== memchr / memcmp ===\n");
	char mm[] = "abcdef";
	printf("memchr('d'): ft = %s, libc = %s\n", ft_memchr(mm, 'd', 6), memchr(mm, 'd', 6));
	printf("memcmp(\"abc\",\"abd\",3): ft = %d, libc = %d\n", ft_memcmp("abc", "abd", 3), memcmp("abc", "abd", 3));

	// strnstr
	printf("\n=== strnstr ===\n");
	printf("ft = %s, libc = %s\n", ft_strnstr("Hello libft world", "libft", 20), strnstr("Hello libft world", "libft", 20));

	// atoi
	printf("\n=== atoi ===\n");
	char *atoi_tests[] = {"42", "   -42", "+123", "--123", "abc", "0", "-2147483648", "2147483647", NULL};
	for (int i = 0; atoi_tests[i]; i++)
		printf("\"%s\": ft = %d, libc = %d\n", atoi_tests[i], ft_atoi(atoi_tests[i]), atoi(atoi_tests[i]));

	// Stress test ft_strlen with large input
	printf("\n=== ft_strlen stress test ===\n");
	char *big = malloc(1000001);
	if (big) {
		memset(big, 'A', 1000000);
		big[1000000] = 0;
		printf("strlen(1M chars): ft = %lu, libc = %lu\n", (unsigned long)ft_strlen(big), (unsigned long)strlen(big));
		free(big);
	}*/

	return 0;
}