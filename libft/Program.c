#include "libft.h"
#include <ctype.h>
int	main()
{
	//char str[12] = "HelloWorldss";
	printf("%d\n",ft_isalpha('c'));
	printf("%d\n",ft_isalpha('C'));
	printf("%d\n",ft_isalpha('4'));
	printf("%d\n",ft_isalpha('+'));
	printf("\n");
	printf("%d\n",ft_isdigit('4'));
	printf("%d\n",ft_isdigit('A'));
	printf("%d\n",ft_isdigit('+'));
	printf("\n");
	printf("%d\n",ft_isalnum('4'));
	printf("%d\n",ft_isalnum('A'));
	printf("%d\n",ft_isalnum('+'));
	printf("%d\n",isalnum('A'));
	printf("\n");
	printf("%d\n",ft_isascii('A'));
	printf("%d\n",ft_isascii('b'));
	printf("%d\n",ft_isascii('+'));
	printf("\n");
	printf("%d\n",ft_strlen("HelloWorld"));
	printf("%d\n",ft_strlen("file name missing."));
	printf("\n");
	/*ft_memset(str, '0', 5);
	printf("%s\n",str);
	ft_memset(str, '0', 11);
	printf("%s\n",str);
	printf("\n");
	ft_bzero(str, 5);
	printf("%s\n",str);
	printf("\n"); */
	//printf("%s\n",ft_strchr(str, 'l'));
	printf("%d\n",atoi("--2A14748364A8"));
	printf("%d\n",ft_atoi("--2A14748364A7"));
	/*ft_memcpy(dest,str,ft_strlen(str));
	printf("%s\n",dest);
	ft_memmove(dest,str,ft_strlen(str));
	printf("%s\n",dest);*/
	char dst[1];
	size_t len = ft_strlcpy(dst, "Overflow", sizeof(dst));
	printf("%s\n",dst);
	printf("%zu\n",len);
}