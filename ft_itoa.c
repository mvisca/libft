/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvisca-g <mvisca-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 17:10:01 by mvisca-g          #+#    #+#             */
/*   Updated: 2023/05/03 20:41:24 by mvisca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	set_n(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}

static char	*get_string(int ncpy, char *res)
{
	while (ncpy / 10 > 0)
	{
		ft_memmove((res + 1), res, ft_strlen(res));
		res[0] = ncpy % 10 + '0';
		ncpy = ncpy / 10;
	}
	ft_memmove((res + 1), res, ft_strlen(res));
	res[0] = ncpy + '0';
	return (res);
}

char	*ft_itoa(int n)
{
	char	*res;
	char	*num;
	int		ncpy;

	if (n == MIN_INT)
		return (ft_strdup("-2147483648"));
	ncpy = set_n(n);
	res = (char *) calloc (13, sizeof(char));
	if (res == NULL)
		return (NULL);
	get_string(ncpy, res);
	if (n < 0)
	{
		ft_memmove(&res[1], res, ft_strlen(res));
		res[0] = '-';
	}
	num = ft_strdup(res);
	free(res);
	return (num);
}

/*
int	main(int ac, char **av)
{
	char *num;

	num = ft_itoa(atoi(av[1]));
	printf ("Num=%s", num);

	return (0);
}
*/
