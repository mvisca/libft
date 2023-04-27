/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvisca-g <mvisca-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 19:40:15 by mvisca-g          #+#    #+#             */
/*   Updated: 2023/04/27 20:00:21 by mvisca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, t_size_t len)
{
	t_size_t	i;

	i = 0;
	while (i < len)
	{
		*((unsigned char*) b + i) = (unsigned char) c;
		i++;
	}
	return (b);
}
