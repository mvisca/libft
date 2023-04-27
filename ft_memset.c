/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvisca-g <mvisca-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 19:40:15 by mvisca-g          #+#    #+#             */
/*   Updated: 2023/04/19 20:25:00 by mvisca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// El man indica usar size_t para len, pero da error de compilacion.
// Puedo definir un:
// 		typedef unsigned long size_t;
// A valorar...

void	*ft_memset(void *b, int c, int len)
{
	int	i;
	int	len_uchars;

	len_uchars = len / sizeof(unsigned char);
	i = 0;
	while (i < len_uchars)
	{
		*((unsigned char*) b + i) = (unsigned char) c;
		i++;
	}
	return (b);
}

#include <stdio.h>
int	main(void)
{
	char b[] = "HolaHolaHola";

	printf ("%s", ft_memset(b, '\n', sizeof(unsigned char) * 3));
	return (0);
}
