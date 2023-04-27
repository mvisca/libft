/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvisca-g <mvisca-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 17:34:52 by mvisca-g          #+#    #+#             */
/*   Updated: 2023/04/25 12:01:46 by mvisca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = 0;
	while (*(str + i))
	{
		if (*(str + i) == c)
		{
			return (str + i);
		}
		i++;
	}
	str = 0;
	return (str);
}

/*
int	main(void)
{
	char	s1[] = "Aqui hay una x y lo demas sigue...";
	char	*s2;

	s2 = ft_strchr(s1, 'x');
	printf ("%s", s2);
	return (0);
}
*/
