#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>

int	ft_isalnum(int c);
int	ft_isalpha(char c);
int	ft_isascii(unsigned int a);
int	ft_isdigit(int c);
int	ft_isprint(int c);
void	*ft_memset(void *str, int c, size_t n);
int	ft_strlen(char *str);
void	*ft_memset(void *str, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t len);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
int	ft_atoi(const char *str);
size_t	ft_strlcat(char *dest, const char *src, size_t destsize);

#endif