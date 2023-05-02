/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvisca-g <mvisca-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 17:10:01 by mvisca-g          #+#    #+#             */
/*   Updated: 2023/05/02 17:12:37 by mvisca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*alloc_num(int n)
{
	char	*num;

	num = (char *) malloc (sizeof(char) * 12);
	if (num == NULL)
		return (NULL);
	
	ft_bzero(num, 12);
	return (num);
}

static char	*get_digits(char *num, int n)
{
	char	*res;
	char	*numcpy;
	char	temp;
	
	res = num;
	numcpy = num;
	while (n / 10 > 0)
	{
		*numcpy = n % 10 + '0';
		numcpy++;
		n = n / 10;
	}
	*numcpy = n % 10 + '0';
	while (num - 1 <= numcpy - 1)
	{
		temp = *num;
		*(num++) = *numcpy;
		*(numcpy--) = temp;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	char	*num;

	num = alloc_num(n);
	if (num == NULL)
		return (NULL);
	
	if (n >= 0)
		get_digits(num, n);
	else
	{
		*num = '-';
		get_digits(&num[1], -n);
	}
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
