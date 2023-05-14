/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvisca-g <mvisca-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 13:45:59 by mvisca-g          #+#    #+#             */
/*   Updated: 2023/05/14 14:08:36 by mvisca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_all(char **res)
{
	int	j;

	j = 0;
	while (res[j])
	{
		free(res[j]);
		res[j++] = NULL;
	}
	free(res);
}

static int	w_count(const char *s, int c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] && s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
			continue ;
		}
		i++;
	}
	return (count);
}

static char	**get_words(char **res, int i, const char *s, char c)
{
	int	j;
	int	k;
	int	len;

	j = 0;
	while (res && s[j])
	{
		while (s[j] && s[j] == c)
			++s;
		len = 0;
		while (s[len] && s[len] != c)
			len++;
		res[i] = (char *) malloc (sizeof(char) * (len + 1));
		if (!res[i])
		{
			free_all(res);
			return (NULL);
		}
		len = 0;
		k = 0;
		while (res && s[j + len] && s[j + len] != c)
			res[i][k++] = s[j + len++];
		if (res)
			res[i++][k] = '\0';
		s = s + len;
	}
	return (res);
}

char	**ft_split(const char *s, char c)
{
	char	**res;

	if (!s)
		return (NULL);
	res = (char **) malloc (sizeof(char *) * (w_count(s, c) + 1));
	if (!res)
		return (NULL);
	res = get_words(res, 0, s, c);
	if (!res)
		free_all(res);
	if (res)
		res[w_count(s, c)] = NULL;
	return (res);
}

/*
int	main(void)
{
	char 	s[] = "HELOO!";
	char	c = ' ';
	char	**arr;
	int		i;

	i = 0;
	arr = ft_split(s, c);
	while (arr && arr[i])
	{
		printf ("%s\n", arr[i]);
		i++;
	}
	return (0);
}*/
