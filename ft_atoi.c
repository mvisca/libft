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

static int	get_sign(char c)
{
	if (c == '+')
		return (1);
	if (c == '-')
		return (-1);
	return (0);
}

static int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || (c == 32))
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int		res;
	int		sign;
	char	*num;

	if (nptr == NULL)
		return (0);
	num = (char *)nptr;
	while (ft_isspace(*num))
		num++;
	sign = 1;
	if (get_sign(*num))
	{
		if (ft_isdigit(*(num + 1)))
			sign = get_sign(*(num++));
		else
			return (0);
	}
	res = 0;
	while (ft_isdigit(*num))
		res = res * 10 + *(num++) - '0';
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
