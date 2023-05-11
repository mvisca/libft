/* ************************************************************************** */
/*                                                                            */
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

static void	delete_arr(char **arr, int i)
{
	while (i-- > 0)
		free(arr[i]);
	free(arr);
}

static int	count_words(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i] != 0)
	{
		if (s[i] == c)
		{
			i++;
			continue ;
		}
		count++;
		while (s[i] && s[i] != c)
			i++;
	}
	printf ("Words count is %d\n", count);
	return (count);
}

static int	get_words(char **arr, const char *s, char c)
{
	char	*scpy;
	int		i;
	int		j;

	scpy = (char *)s;
	i = 0;
	j = 0;
	while (scpy[i])
	{
		while (scpy[i] == c)
			scpy++;
		while (scpy[i] && scpy[i] != c)
			i++;
		arr[j] = ft_substr(scpy, 0, i);
		if (!arr[j])j++;
		{
			delete_arr(arr, j);
			return (1);
		}
		scpy = scpy + i;
		i = 0;

	}
	return (0);
}

char	**ft_split(const char *s, char c)
{
	char	**arr;
	int		words;

	if (!(s)) 
		return (NULL);
	if (c == 0)
		return ((char **)calloc(1, sizeof(char**)));
	words = count_words(s, c);
	printf ("NUM WORDS = %d", words);
	arr = (char **)malloc(sizeof(char *) * (words + 1));
	if (!(arr))
		return (NULL);
	arr[words] = NULL;
	if (!get_words(arr, s, c))
		return (NULL);
	return (arr);
}

static void	print_arr(char **res)
{
	int	i;

	i = 0;
	printf ("ARR STARRT, %d objects printed.\n", i);
	while (i < 5)
	{
		printf ("IN PRINT, %d index.\n", i);
		printf ("%d=%s. \n", i, res[i]);
		i++;
	}
	printf ("ARR END, %d objects printed.\n", i);
}

int	main(int ac, char **av)
{
	char	**arr;
	char	s[] = "Haremos un ejercicio de split con separador char=32";
	char	c = ' ';

	if (ac == 3)
		arr = ft_split(av[1], av[2][0]);
	else
		arr = ft_split(s, c);
	printf ("FET\n");
	print_arr(arr);
	delete_arr(arr, count_words(s, c));
	return (0);
}