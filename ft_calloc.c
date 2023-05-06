/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvisca-g <mvisca-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 10:49:31 by mvisca-g          #+#    #+#             */
/*   Updated: 2023/05/04 13:52:08 by mvisca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = NULL;
	if (size == 0)
		return (NULL);
	if (nmemb == 0)
		return (NULL);
	if (nmemb * size > MAX_INT)
		return (NULL);
	ptr = (void *) malloc (nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, nmemb * size);
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
