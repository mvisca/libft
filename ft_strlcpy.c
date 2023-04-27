/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvisca-g <mvisca-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 19:04:27 by mvisca-g          #+#    #+#             */
/*   Updated: 2023/04/20 19:41:10 by mvisca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#include "ft_strlen.c"
#include <stdio.h>
*/

int	ft_strlcpy(char *dst, const char *src, int size)
{
	ft_size_t i;

	i = 0;
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (i);
}

/*
int	main(int ac, char **av)
{
	char 	*s1 = av[1];
	char	s2[20];
	int		retorno;

	retorno = ft_strlcpy(s2, s1, (ft_size_t)ft_strlen(s1) + 1);

	printf ("original: %s\n", s1);
	printf ("copia: %s \nretorno: %d\n", s2, retorno);
	return (0);
}
*/
