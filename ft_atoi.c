/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvisca-g <mvisca-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 10:46:36 by mvisca-g          #+#    #+#             */
/*   Updated: 2023/05/05 16:40:36 by mvisca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || (c == 32))
		return (1);
	return (0);
}

static int	is_neg(char c)
{
	if (c == '+')
		return (1);
	else if (c == '-')
		return (-1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	n;
	int	neg;

	if (nptr == NULL)
		return (0);
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '+' || *nptr == '-')
		neg = is_neg(*(nptr++));
	if (!(ft_isdigit(*nptr)))
		return (0);
	n = 0;
	while (*nptr && ft_isdigit(*nptr))
	{
		n = (n * 10) + *nptr++ - '0';
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
