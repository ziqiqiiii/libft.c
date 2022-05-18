#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>

int 	ft_isalnum(int c);
int 	ft_isalpha(char c);
int		ft_isascii(unsigned int a);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memset(void *str, int c, size_t n);
int		ft_strlen(char *str);

#endif