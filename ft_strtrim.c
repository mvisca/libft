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

#include "libft.h"

static char	*alloc_res(const char *s1, const char *set)
{
	char		*res;
	t_size_t	aux;

	aux = ft_strlen((char *) s1) - ft_strlen((char *) set);
	res = (char *) malloc (sizeof(char) * (aux + 1));
	if (res == NULL)
		return (NULL);
	return (res);
}

static char	*str_trim(char *s1, char *set, char *res)
{
	char		*rescpy;
	char		*start;
	char		*end;
	t_size_t	len;

	rescpy = res;
	len = ft_strlen(s1);
	start = ft_strnstr(s1, set, len); 
	end = (start + ft_strlen(set));

	while (*s1 != '\0')
	{
		if (s1 >= start && s1 < end)
		{
			s1++;
			continue;
		}
		*rescpy++ = *s1++;
	}
	*rescpy = '\0';
	return (res);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char		*res;
	t_size_t	len;

	len = ft_strlen((char *)s1);
	if (ft_strnstr(s1, set, len) == NULL)
		return ((char *)s1);

	res = alloc_res(s1, set);
	if (res == NULL)
		return (NULL);
	
	res = str_trim((char *)s1, (char *)set, res);	
	return (res);
}

/*
int	main(void)
{
	char	s1[] = "Quitar quItar algo";
	char	set1[] = "Itar";
	char	*res1;

	res1 = ft_strtrim(s1, set1);
	printf ("MIA=%s\n", res1);
	return (0);
}
*/
