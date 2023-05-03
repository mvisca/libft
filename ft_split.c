/* ************************************************************************** */
/*t                                                                           */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvisca-g <mvisca-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 11:26:55 by mvisca-g          #+#    #+#             */
/*   Updated: 2023/05/03 20:59:32 by mvisca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	split_arr(char **res, char *dup, char c)
{
	t_size_t i;
	t_size_t j;

	j = 0;
	while (ft_strchr(dup, c))
	{
		i = (t_size_t)ft_strchr(dup, c) - (t_size_t)dup;
		dup[i] = '\0';
		res[j++] = ft_strdup(dup);
		dup = dup + i + 1;
	}
	res[j++] = ft_strdup(dup);
	res[j] = NULL;
}

static char	**alloc_arr(char *s, char c)
{
	char		**arr;
	t_size_t	nelem;

	nelem = 0;
	while (*s)
	{
		if (*s == c)
			nelem++;
		s++;
	}
	arr = (char **) malloc (sizeof(char *) * nelem + 2);
	if (arr == NULL)
		return (NULL);
	return (arr);
}

static char	*clean_str(char *s, char c)
{
	t_size_t	len;
	char		*scpy;
	
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
	dup = clean_str(dup, c);
	res = alloc_arr(dup, c);
	if (res == NULL)
		return (NULL);

	split_arr(res, dup, c);
	free (dup);
	return (res);
}

/*
int	main(int ac, char **av)
{
	char	s1[] = "   Esta prueba !! esto? ?   ";
	char	**res;
	int		i;
	char	*c = " ";

	printf ("A: %s.\n", av[1]);
	res = ft_split(av[1], av[2][0]);
	i = 0;
	while (res[i] != NULL)
	{
		printf ("%d=%s. \n", i, res[i]);
		i++;
	}
	return (0);
}
*/
