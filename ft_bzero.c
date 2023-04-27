/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvisca-g <mvisca-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 16:08:09 by mvisca-g          #+#    #+#             */
/*   Updated: 2023/04/20 16:20:51 by mvisca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>
*/

#include "libft.h"

void	bzero(void *s, ft_size_t n)
{
	int	 i;
	char	*ptr;

	ptr = (char*) s;
	while (i < n)
		*(ptr + i++) = '\0';
}

void	show(char *str, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (*(str + i) == '\0')
			write (1, "0", 1);
		else
			write (1, (str + i), 1);
		i++;
	}
}

/*
int	 main(void)
{
	char	str[] = "Hola Hola sigo probando";

	show(str, 23);
	bzero(&str, 20);
	write (1, "\n", 1);
	show(str, 23);
	return (0);
}
*/
