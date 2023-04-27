/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvisca-g <mvisca-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 19:04:27 by mvisca-g          #+#    #+#             */
/*   Updated: 2023/04/27 21:55:06 by mvisca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_size_t	ft_strlcpy(char *dest, const char *src, t_size_t size)
{
	t_size_t	i;

	if (size == 0)
		return (0);
	i = 0;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}

/*
TESTEAR CON UN ARGUEMENTO
int	main(int ac, char **av)
{
	char 		*s1 = av[1];
	char		s2[20];
	t_size_t	retorno;

	retorno = ft_strlcpy(s2, s1, (t_size_t)ft_strlen(s1) - 1);

	printf ("original: %s\n", s1);
	printf ("copia: %s \nretorno: %lu\n", s2, retorno);
	return (0);
}
*/
