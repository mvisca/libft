/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvisca-g <mvisca-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 10:49:14 by mvisca-g          #+#    #+#             */
/*   Updated: 2023/04/24 19:13:08 by mvisca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
#include <stddef.h>
#include <stdio.h>
*/

void free_all(size_t i, void **ptr)
{
	while (i >= 0)
	{
		free(*(ptr + i));
		i --;
	}
	free(ptr);
}

void *ft_calloc(size_t nmemb, size_t size)
{
	void	**ptr;
	size_t	i;

	if (nmemb * size == 0)
		return (NULL);
	ptr = malloc (sizeof(void *) * nmemb);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < nmemb)
	{
		*(ptr + i) = malloc (size);
		if (*(ptr + i) == NULL)
		{
			free_all(i, ptr);
			return (NULL);
		}
		memchar(*(ptr + i), '0', size);
		i++;
	}
	return (ptr);
}

/*
int	main(void)
{
	char	**ptr;
	int		i;
	int		j;
	char	c;

	ptr = ft_calloc (4, 10);
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 10)
		{
			c = (char) ptr[i][j];
			printf ("%c", c);
			j++;
		}
		i++;
	}
	return (0);
}
*/
