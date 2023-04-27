/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvisca-g <mvisca-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 19:51:29 by mvisca-g          #+#    #+#             */
/*   Updated: 2023/04/27 20:02:49 by mvisca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void  *ft_memcpy(void *dest, const void *src, t_size_t n)
{
	char	  	*c_dest;
	const char	*c_src;
	t_size_t	i;

	c_dest = (char *) dest;
	c_src = (char *) src;
	i = 0;
	while (n--)
	{
		*c_dest++ = *c_src++;
	}
	return (dest);
}
