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
	char	*scpy;
	char	ccpy;

	scpy = (char *)s;
	ccpy = (char)c;

	while (*scpy)
	{
		if (*scpy == ccpy)
			return (scpy);
		scpy++;
	}
	if (*scpy == ccpy)
		return (scpy);
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
