#include "libft.h"

int	main()
{
	printf("%d\n",ft_isalpha('c'));
	printf("%d\n",ft_isalpha('C'));
	printf("%d\n",ft_isalpha('4'));
	printf("%d\n",ft_isalpha('+'));
	printf("\n");
	printf("%d\n",ft_isdigit('4'));
	printf("%d\n",ft_isdigit('A'));
	printf("%d\n",ft_isdigit('+'));
	printf("\n");
	printf("%d\n",ft_isallnum('4'));
	printf("%d\n",ft_isallnum('A'));
	printf("%d\n",ft_isallnum('+'));
	printf("\n");
	printf("%d\n",ft_isascii('A'));
	printf("%d\n",ft_isascii('b'));
	printf("%d\n",ft_isascii('+'));
	printf("\n");
	printf("%d\n",ft_strlen("HelloWorld"));
	printf("%d\n",ft_strlen("file name missing."));
	printf("\n");
}