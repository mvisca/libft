/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvisca-g <mvisca-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 17:34:52 by mvisca-g          #+#    #+#             */
/*   Updated: 2023/05/05 13:02:11 by mvisca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		stop;

	stop = 0;
	while (!stop)
	{
		if (*s == 0)
			stop = 1;
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
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
