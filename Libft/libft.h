#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_isalpha(int alpha);
int	ft_isdigit(int digit);
int	ft_isalnum(int num);
int	ft_isprint(int c);
int	ft_isascii(int c);
int	ft_strlen(char *str);
void	*ft_memset(void *str, int c, size_t n);
void	ft_bzero(void *s, size_t size);
void	*ft_memcpy(void *dest, const void *src, size_t num);
void	*ft_memmove(void *dest, const void *src, size_t num);
int	ft_toupper(int ch);
int	ft_tolower(int ch);