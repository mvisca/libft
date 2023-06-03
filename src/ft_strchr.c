/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvisca <mvisca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 17:34:52 by mvisca-g          #+#    #+#             */
/*   Updated: 2023/06/03 12:44:01 by mvisca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != (unsigned char)c)
	{
		if (*(s + 1) == '\0')
		{
			if (((unsigned char)c) == '\0')
				return ((char *)s + 1);
			return (NULL);
		}
		s++;
	}
	return ((char *)s);
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
