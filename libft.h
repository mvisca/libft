#ifndef LIBFT_h
# define LIBFT_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef unsigned long	t_size_t;

char	*ft_substr(const char *s, unsigned int start, t_size_t len);
char	*ft_shift(char *s);

int		ft_strlen(char *str);

void	*ft_memcpy(void *restrict dest, const void *restrict src, t_size_t n); 
void    *ft_memmove(void *dest, const void *src, t_size_t n);

#endif
