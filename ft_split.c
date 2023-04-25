/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvisca-g <mvisca-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 11:26:55 by mvisca-g          #+#    #+#             */
/*   Updated: 2023/04/25 12:05:19 by mvisca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int	c_count(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s == c)
			count++;
		s++;
	}
	return (count);
}

int	s_max(const char *s, char c)
{
	int	max;
	int	count;
	int	i;

	max = 0;
	count = 0;
	i = 0;
	while (*(s + i))
	{
		if (*(s + i) == c)
			count = 0;
		else
			count++;
		if (count > max)
			max = count;
		i++;
	}
	return (max);
}

char	**ft_split(const char *s, char c)
{
	int		arr_len;
	int		max;
	int		i;
	int		j;
	char	**res;
	char	*str;

	arr_len = c_count(s, c);
	max = s_max(s, c);

	res = (char **) calloc (arr_len + 1, max + 1);
	if (res == NULL)
		return (NULL);
	
	i = 0;
	j = 0;
	while ((s + i) < ft_strchr((s + i), c))
	{
		if (*(s + i) == c)
		{
			*(*(res + j)) = '\0';
			i++;
			j = 0;
		}
		else 
			*(*(res + j)) = *(s + i);
		i++;
		j++;
	}
	*(res + arr_len) = NULL;
	return (res);
}

int	main(void)
{
	char	s1[] = "Hola que tal";
	char	**res;
	int		i;

	res = ft_split(s1, ' ');
	i = 0;
	while (*(res + i))
	{
		printf ("%s", *(res + i));
		i++;
	}
	return (0);
}
