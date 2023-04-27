/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvisca-g <mvisca-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:07:43 by mvisca-g          #+#    #+#             */
/*   Updated: 2023/04/27 17:28:46 by mvisca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_h
# define LIBFT_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef unsigned long	t_size_t;

char	*ft_substr(const char *s, unsigned int start, t_size_t len);
char	*ft_shift(char *s);

int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_strlen(char *str);

void	*ft_memcpy(void *restrict dest, const void *restrict src, t_size_t n); 
void    *ft_memmove(void *dest, const void *src, t_size_t n);

#endif
