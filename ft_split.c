/* ************************************************************************** */
/*t                                                                           */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvisca-g <mvisca-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 11:26:55 by mvisca-g          #+#    #+#             */
/*   Updated: 2023/05/08 18:36:00 by mvisca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	split_arr(char **res, char *dup, char c)
{
	size_t	i;
	size_t	j;

	if (ft_strlen(dup) == 0)
	{
		res[0] = NULL;
		return ;
	}
	j = 0;
	while (c && ft_strchr(dup, c))
	{
		i = ft_strchr(dup, c) - dup;
		dup[i] = '\0';
		res[j++] = ft_strdup(dup);
		dup = dup + i + 1;
	}
	res[j++] = ft_strdup(dup);
	res[j] = NULL;
}

static char	**alloc_arr(char *s, char c)
{
	char	**arr;
	size_t	nelem;

	nelem = 0;
	while (*s)
	{
		if (*s == c)
			nelem++;
		s++;
	}
	arr = (char **) malloc(sizeof(char *) * (nelem + 2));
	if (arr == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	return (arr);
}

static char	*clean_str(char *s, char c)
{
	size_t	len;
	char	*scpy;

	scpy = s;
	while (*s)
	{
		if ((s == scpy && *s == c)
			|| (*s == c && *(s + 1) == c)
			|| (*s == c && *(s + 1) == '\0'))
		{
			len = ft_strlen(s);
			ft_memmove(s, (s + 1), len);
		}
		else
		{
			s++;
		}
	}
	return (scpy);
}

char	**ft_split(const char *s, char c)
{
	char		**res;
	char		*dup;

	dup = ft_strdup(s);
	if (dup == NULL)
		return (NULL);
	dup = clean_str(dup, c);
	res = alloc_arr(dup, c);
	if (res == NULL)
		return (NULL);
	split_arr(res, dup, c);
	free (dup);
	return (res);
}

/*
int	main(void)
{
//	char	s1[] = "lorem euismod non, mi.";
	char	s1[] = "notempty";
	char	**res;
	int		i;
	char	c = '\0';

	res = ft_split(s1, c);
	i = 0;
	while (res[i] != NULL)
	{
		printf ("%d=%s. \n", i, res[i]);
		i++;
	}
	return (0);
}
*/
