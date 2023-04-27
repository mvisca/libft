/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvisca-g <mvisca-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 11:23:46 by mvisca-g          #+#    #+#             */
/*   Updated: 2023/04/25 11:26:18 by mvisca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
/*
#include <string.h>
#include <stdio.h>
*/

// USAR LIBRERIAS PROPIAS

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*res;
	char	*ini;
	int		len_set;
	int		len_s1;
	int		i;

	len_set = ft_strlen(set);
	len_s1 = ft_strlen(s1);
	
	res = (char *) malloc (sizeof(char) * len_s1 - len_set + 1);
	if (res == NULL)
		return (NULL);
	
	ini = ft_strstr(s1, set);
	i = 0;
	while ((s1 + i) < (s1 + len_s1 - len_set))
	{
		if ((s1 + i) < (ini))
			*(res + i) = *(s1 + i);
		else
			*(res + i) = *(s1 + i + len_set);
		i++;
	}
	*(res + i + len_set) = '\0';
	return (res);
}

int	main(void)
{
	char	s1[] = "Quitar quitar algo";
	char	set[] = "quitar ";
	char	*res;

	res = ft_strtrim(s1, set);
	printf ("%s", res);
	return (0);
}
