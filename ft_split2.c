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
			ft_memmove(&s[i], &s[i + 1], (t_size_t)(ft_strlen(s) - i));
		else
			i++;
	}
	if (s[i - 1] == c)
		*(s + i - 1) = '\0';
	printf ("STRCLEAN=%s.\n", s);
	return (s);
}

char **ft_split(char const *s, char c)
{
	char	**res;
	char	*tmp;
	int		ini;
	int		len;
	int		i;
	int		j;

	res = (char **) malloc (sizeof(char *) * 15);
	if (res == NULL)
	{
		printf ("res malloc fail");
		exit (1);
	}
	tmp = (char *)s;
	tmp = ft_clean_string(tmp, c);
	i = 0;
	j = 0;
	ini = 0;
	while (tmp[i])
	{
		if (tmp[i] == c)
		{
			len = i - ini;
			res[j] = (char *) malloc (sizeof(char) * len + 1);
			if (res[j] == NULL)
				return (NULL);

			strcpy(res[j], &tmp[ini]);
			res[j++][len] = '\0';
			ini = i + 1;
			i += ft_strlen(res[j - 1]);
		}
		else
			i++;
	}
	len = i - ini;
	res[j++] = malloc (i - ft_strlen((char *)s + 1));
	strcpy(res[j++], &tmp[ini]);
	res[j++][len] = '\0';
	res[j++] = NULL;
	return (res);
}

int	main(void)
{
	char	s1[] = "   Esta prueba me está volviendo loco !! Por qué pasa esto? ?   ";
	char	**res;
	int		i;
	char	*c = " ";

	printf ("A: %s.\n", s1);
	res = ft_split(s1, *c);
	i = 0;
	while (res[i] != NULL)
	{
		printf ("%d=%s. \n", i, res[i]);
		i++;
	}
	return (0);
}
