/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvisca-g <mvisca-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 19:48:34 by mvisca-g          #+#    #+#             */
/*   Updated: 2023/04/28 20:00:34 by mvisca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, t_size_t n)
{
	unsigned char	*us1;
	unsigned char	*us2;
	t_size_t		i;

	us1 = (unsigned char *) s1;
	us2 = (unsigned char *) s2;
	i = 0;
	while (i < n && us1[i] == us2[i])
	{
		i++;
	}
	return (us1[i] - us2[i]);
}

/*
int	main(void)
{
	char s[22] = "holalola";
	char d[22] = "hola\200hola";

	printf ("%d\n", ft_memcmp(s, d, 22));
	printf ("%d\n", memcmp(s, d, 22));
	return (0);
}
*/
