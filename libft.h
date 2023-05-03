/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvisca-g <mvisca-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:07:43 by mvisca-g          #+#    #+#             */
/*   Updated: 2023/05/03 16:43:00 by mvisca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <errno.h>
# include <fcntl.h>
# include <unistd.h>

typedef unsigned int	t_size_t;

char		*ft_itoa(int n);
char		*ft_shift(char *s);
char		**ft_split(const char *s, char c);
char		*ft_strchr(const char *s, int c);
char		*ft_strdup(const char *s);
char		*ft_strjoin(const char *s1, const char *s2);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char		*ft_strnstr(const char *haystack, const char *needle, t_size_t len);
char		*ft_strrchr(const char *s, int c);
char		*ft_strncmp(const char *s1, const char *s2, t_size_t n);
char		*ft_substr(const char *s, unsigned int start, t_size_t len);

int			ft_atoi(const char *nptr);
int			ft_isalpha(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isprint(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);

t_size_t	ft_strlcat(char *dest, const char *src, t_size_t size);
t_size_t	ft_strlcpy(char *dest, const char *src, t_size_t size);
t_size_t	ft_strlen(char *str);

void		ft_bzero(void *s, t_size_t n);
void		*ft_calloc(t_size_t nmemb, t_size_t size);
void		*ft_memcpy(void *dest, const void *src, t_size_t n);
void		*ft_memcmp(const void *s1, const void *s2, t_size_t n);
void		*ft_memchr(const void *s, int c, t_size_t n);
void    	*ft_memmove(void *dest, const void *src, t_size_t n);
void		*ft_memset(void *b, int c, t_size_t len);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void 		ft_striteri(char *s, void (*f)(unsigned int, char*));

#endif
