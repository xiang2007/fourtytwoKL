#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

int	ft_isalpha(char c);
int	ft_isdigit(char digit);
int	ft_isalnum(char c);
int	ft_isascii(int c);
int	ft_strlen(char *str);
void *ft_memset(void *str, int c, size_t n);
void *ft_bzero(void *str, size_t n);
int	ft_toupper(int ch);
int	ft_tolower(int ch);
char    *ft_strchr(const char *str, int search_str);
int ft_atoi(const char *str);
void *ft_memcpy (void *dest,const void *src, size_t num);