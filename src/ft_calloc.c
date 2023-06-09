/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvisca-g <mvisca-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 18:56:11 by mvisca-g          #+#    #+#             */
/*   Updated: 2023/05/26 18:56:16 by mvisca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = (void *) malloc (nmemb * size);
	if (ptr)
		ft_bzero(ptr, nmemb * size);
	return (ptr);
}

/*
int main(void)
{
	char	*cptr;

	cptr = (char *) ft_calloc (2222222222, 1);
	if (cptr == NULL)
	{
		printf ("FAIL");
		return (1);
	}
	free(cptr);
	return (0);
}
*/
