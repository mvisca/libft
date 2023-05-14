/* ************************************************************************** */
/*																			  */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvisca-g <mvisca-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 11:32:17 by mvisca-g          #+#    #+#             */
/*   Updated: 2023/05/09 14:08:58 by mvisca-g         ###   ########.fr       */
/*																			  */
/* ************************************************************************** */

#include "libft.h"

static int	words_in_str(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s && s[i])
	{
		if (s[i] && s[i] == c)
			i++;
		else if (s[i] && s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static int	end_word(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static void	free_all(char **arr, int a)
{
	while (--a >= 0)
		free(arr[a]);
	free(arr);
}

static char	*copy_word(char **arr, int a, const char *s, char c)
{
	int		i;
	int		j;
	int		end;
	char	*w;

	i = 0;
	j = 0;
	end = end_word(s, c);
	w = (char *) malloc (end + 1);
	if (!w)
	{
		free_all(arr, a);
		return (NULL);
	}
	while (s[i] && s[i] == c)
		i++;
	while (s[i] && s[i] != c)
		w[j++] = s[i++];
	w[j] = '\0';
	arr[a + 1] = NULL;
	return (w);
}

char	**ft_split(const char *s, char c)
{
	int		a;
	int		start;
	char	**arr;

	a = 0;
	start = 0;
	arr = (char **) malloc (sizeof(char *) * (words_in_str(s, c) + 1));
	if (!arr)
		return (NULL);
	while (s && s[start])
	{
		if (s[start] && s[start] == c)
			start++;
		if (s[start] && s[start] != c)
		{
			arr[a] = copy_word(arr, a, &s[start], c);
			if (!(arr[a++]))
				return (NULL);
			start += end_word(&s[start], c);
		}
	}
	arr[a] = NULL;
	return (arr);
}

/*
int	main(void)
{
	char 	s[] = "          HOLA          TEST   HOLA  ";
	char	c = ' ';
	char	**arr;
	int		i;

	i = 0;
	arr = ft_split(s, c);
	while (arr[i])
	{
		printf ("%s\n", arr[i]);
		i++;
	}
	return (0);
}
*/
