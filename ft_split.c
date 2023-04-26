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
#include <string.h>
#include <stdio.h>

/*
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
	int		*words;
	int		max;
	int		i;
	int		j;
	char	**res;
	char	*str;

	words = find_words((char *)s, c);
	max = s_max(s, c);

	res = (char **) calloc (arr_len + 1, 5);
	if (res == NULL)
		return (NULL);
	
	i = 0;
	j = 0;
	while ((s + i) < strchr((s + i), c))
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
//	*(res + arr_len) = NULL;
	return (res);
}
*/


char	*ft_shift(char *s)
{
	char	*tmp;
	int		i;

	if (ft_strlen(s) == 0)
		return (s);

	tmp = (char *) malloc (sizeof(char) * ft_strlen(s));
	if (tmp == NULL)
		return (NULL);
	
	if (ft_strlen(s) < 2)
	{
		*(tmp) = '\0';
		free(s);
		return (tmp);
	}

	i = 1;
	while (*(s + i))
	{
		*(tmp + i - 1) = *(s + i);
		i++;
	}
	*(tmp + i - 1) = '\0';
	free(s);
	return (tmp);
}

char	*ft_clean_string(char *s, char c)
{
	int	i;
	int	j;

	while (*s == c)
		s = ft_shift(s);

	i = 0;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] == c)
		{
			ft_memmove(&s[i], &s[i + 1], (ft_strlen(s) - i));
		}
		else
			i++;
	}
	if (s[i - 1] == c)
	{
		*(s + i - 1) = '\0';
	}
	printf ("C: %s", s);
	printf (".\n");
	return (s);
}

int *ft_find_words(char *s, char c)
{
	char	*dup;
	int		*words;
	int		i;
	int		j;

	dup = strdup(s);
	dup = ft_clean_string(dup, c);
	printf ("B: %s", dup);
	printf (".\n");

	words = (int *) malloc ((j + 2) * sizeof(int));
	if (words == NULL)
		return (NULL);
	
	i = 0;
	j = 0;
	while (*(dup + i))
	{
		if (*(dup + i) == c)
		{
			*(words + j) = i;
			j++;
		}
		i++;
	}
	*(words + j) = 0;
	free(dup);
	return (words);
}

int	main(void)
{
	char	s1[] = "   Hola todo    ?!        ";
	int		*res;
	int		i;
	char	c = ' ';

	printf ("A: %s", s1);
	printf (".\n");
	res = ft_find_words(s1, c);
	if (res == NULL)
	{
		printf ("FAIL");
		return (1);
	}
	i = 0;
	while (res[i])
	{
		printf ("%d\n", res[i]);
		i++;
	}
	return (0);
}
