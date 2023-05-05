/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvisca-g <mvisca-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 17:37:07 by mvisca-g          #+#    #+#             */
/*   Updated: 2023/05/05 14:00:58 by mvisca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*h;
	char	*n;

	h = (char *) haystack;
	n = (char *) needle;
	if (ft_strlen(n) < 1 )
		return (h);
	i = 0;
	while (*(h + i) && i < len)
	{
		j = 0;
		while (*(n + j) == *(h + i + j))
		{
			if (*(n + j + 1) == '\0' && (i + j < len))
			{
				return (h + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	char		str[30];
	ft_strlcpy(str, "Hola que tal hay x aquiooo", 27);

	char		c[30];
	ft_strlcpy(c, "tal", 4);

	char	*ptr3;
	size_t	n;

	n = 20; 
	ptr3 = ft_strnstr(str, c, n);
	printf ("%s\n", ptr3);
	return (0);
}
*/
