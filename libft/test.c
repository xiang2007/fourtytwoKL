/*#include <stdio.h>
#include <string.h>

// Declare your ft_bzero
void	ft_bzero(void *str, size_t n);

int	main(void)
{
	char str[10] = "123456789";

	printf("Before bzero: %s\n", str);  // Should print "123456789"

	ft_bzero(str, 5);  // Zero out the first 5 bytes

	// Print hex values to see the zeroed bytes
	printf("After bzero (hex): ");
	for (int i = 0; i < 10; i++)
		printf("%02x ", (unsigned char)str[i]);
	printf("\n");

	// Try to print as string (may stop early due to nulls)
	printf("After bzero (as string): %s\n", str);

	return 0;
}*/
