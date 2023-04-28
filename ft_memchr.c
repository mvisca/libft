/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvisca-g <mvisca-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 19:40:02 by mvisca-g          #+#    #+#             */
/*   Updated: 2023/04/28 19:47:52 by mvisca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, t_size_t n)
{
	unsigned char	*ptr;
	unsigned char	uc;
	t_size_t		i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		uc = (unsigned char)c;
		if (ptr[i] == uc)
			return (ptr + i);
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	char str[22] = "buscando una x aqui";
	char c = 'f';

	printf ("%s", ft_memchr(str, c, 22));
	return (0);
}
*/
