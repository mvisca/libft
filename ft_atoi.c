/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvisca-g <mvisca-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 10:46:36 by mvisca-g          #+#    #+#             */
/*   Updated: 2023/05/06 18:09:34 by mvisca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || (c == 32))
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	unsigned int	res;
	int				i;
	int				sign;
	
	res = 0;
	i = 0;
	sign = 1;
	while (ft_isspace(nptr[i]))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
		res = (res * 10) + (nptr[i++] - '0');
	return (res * sign);
}

/*
int	main(int ac, char **av)
{
	char *s = "  \v\r\f\n\t ia+22";
	if (ac == 2)
	{
		printf ("MIO=%d\n", ft_atoi(av[1]));
		printf ("ORI=%d\n", atoi(av[1]));
	}
	else
	{
		printf ("MIO=%d\n", ft_atoi(s));
		printf ("ORI=%d\n", atoi(s));
	}
	return (0);
}
*/
