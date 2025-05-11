#include "libft.h"

int	main()
{
	char str[100] = "HelloWorld";
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
	ft_memset(str, '0', 5);
	printf("%s\n",str);
	//ft_memset(str, '0', 11);
	//printf("%s\n",str);
	printf("\n");
	//ft_bzero(str, 5);
	//printf("%s\n",str);
	//printf("\n");
}