/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvisca-g <mvisca-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 20:17:25 by mvisca-g          #+#    #+#             */
/*   Updated: 2023/04/28 20:17:47 by mvisca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = (char *) s;
	i = ft_strlen(str);
	while (i >= 0)
	{
		if (*(str + i) == (char) c)
		{
			return (str + i);
		}
		i--;
	}
	return (NULL);
}

/*
int     main(void)
{
        char    str[] = "Hola aqui";
        char    c = '\0';

        printf ("%s\n", ft_strrchr(str, c));
        printf ("%s\n", strrchr(str, c));
        return (0);
}
*/
