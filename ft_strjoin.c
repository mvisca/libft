/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvisca-g <mvisca-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 11:21:55 by mvisca-g          #+#    #+#             */
/*   Updated: 2023/05/03 21:00:05 by mvisca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_size_t	get_len(char *s1, char *s2)
{
	return (ft_strlen(s1) + ft_strlen(s2));
}

static char *alloc_str(char *s1, char *s2)
{
	char		*new;
	t_size_t	len;

	len = get_len(s1, s2);
	new = (char *) malloc (sizeof(char) * len + 1);
	if (new == NULL)
		return (NULL);
	return (new);
}

static char	*join_str(char *s1, char *s2, char *new)
{
	t_size_t	sum_len;
	t_size_t	len;
	t_size_t	i;

	sum_len = get_len(s1, s2);
	len = ft_strlen((char *) s1);
	i = 0;
	while (i < sum_len)
	{
		if (i < len)
			*(new + i) = *(s1 + i);
		else
			*(new + i) = *(s2 + i - len);
		i++;
	}
	*(new + i) = '\0';
	return (new);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char		*new;

	new = alloc_str((char *) s1, (char *) s2);
	if (new == NULL)
		return (NULL);
	new = join_str((char *) s1, (char *) s2, new);
	return (new);
}

/*
int main() {
    char str1[] = "Hello ";
    char str2[] = "World";
    char *result = ft_strjoin(str1, str2);

    printf("Result: %s\n", result);

    free(result);

    return 0;
}
*/
