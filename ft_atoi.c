/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvisca-g <mvisca-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 10:46:36 by mvisca-g          #+#    #+#             */
/*   Updated: 2023/04/24 10:48:37 by mvisca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	n;
	int	neg;

	if (nptr == NULL)
		return (0);
	neg = 1;
	if (*(nptr) == '-')
	{
		neg = -1;
		nptr++;
	}
	n = 0;
	i = 0;
	while (*(nptr + i) && ft_isdigit(*(nptr + i)))
	{
		n = (n * 10) + *(nptr + i) - '0';
		i++;
	}
	return (n * neg);
}

/*
int	main(int ac, char **av)
{
	printf ("%d", ft_atoi(av[1]));
	return (0);
}
*/
