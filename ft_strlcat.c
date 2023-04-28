/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvisca-g <mvisca-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 19:42:07 by mvisca-g          #+#    #+#             */
/*   Updated: 2023/04/28 17:29:57 by mvisca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dst, const char *src, t_size_t size)
{
	t_size_t	s;
	int			len_dst;
	int			return_value;

	return_value = ft_strlen((char *)src);
	len_dst = ft_strlen(dst);
	if (size == 0)
		return (return_value);
	else if (size < len_dst)
		return (return_value + size);
	else
		return_value += len_dst;
	s = 0;
	while (src[s] && (len_dst + s) < size - 1)
	{
		dst[len_dst + s] = src[s];
		s++;
	}
	dst[len_dst + s] = '\0';
	return (return_value);
}

/*
int	main(int ac, char **av)
{
	char 	*s1 = av[1];
	char	s2[30] = "hola ";
	char	s3[30] = "hola ";
	int		retorno;

	system("clear");
	retorno = ft_strlcat(s2, s1, atoi(av[2]));

	printf ("src: %s\n\n", s1);
	printf ("dest ini: %s\n\n", s2);
	
	printf ("dest final: %s \nretorno: %d\n\n", s2, retorno);
	
	retorno = strlcat(s3, s1, atoi(av[2]));
	printf ("ori dest final: %s \nretorno> %d\n", s3, retorno);

	return (0);
}
*/
