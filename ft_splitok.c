/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvisca-g <mvisca-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 13:45:59 by mvisca-g          #+#    #+#             */
/*   Updated: 2023/05/15 16:37:01 by mvisca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	free_all(char **arr)
{
	int	j;

	j = 0;
	while (arr[j])
	{
		free(arr[j]);
		j++;
	}
	free(arr);
	return (1);
}

static int	w_count(const char *s, int c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s && s[i])
	{
		if (s[i] && s[i] == c)
		{
			i++;
			continue ;
		}
		count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static char	*w_add(const char *s, int i, int c)
{
	int		len;
	char	*word;

	len = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i + len] && s[i + len] != c)
		len++;
	word = (char *) malloc (len + 1);
	if (!word)
		return (NULL);
	len = 0;
	while (s[i] && s[i] != c)
		word[len++] = s[i++];
	word[len] = '\0';
	return (word);
}

static int	update_i(const char *s, int i, char c)
{
	while (s[i] && s[i] == c)
		i++;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	**ft_split(const char *s, char c)
{
	char	**res;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	res = malloc (sizeof(char *) * (w_count(s, c) + 1));
	if (!res)
		return (NULL);
	while (j < w_count(s, c))
	{
		res[j] = w_add(s, i, c);
		if (!res[j++])
		{
			free_all(res);
			return (NULL);
		}
		i = update_i(s, i, c);
	}
	res[j] = NULL;
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
