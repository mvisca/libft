/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvisca-g <mvisca-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 10:49:31 by mvisca-g          #+#    #+#             */
/*   Updated: 2023/04/24 10:41:21 by mvisca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void free_arr(t_size_t i, void **ptr)
{
	t_size_t j;

	j = 0;
	while (j < i)
	{
		free(*(ptr + j));
			j++;
	}
	free(ptr);
	ptr = NULL;
}

void *ft_calloc(t_size_t nmemb, t_size_t size)
{
	void	**ptr;
	t_size_t	i;

	if (nmemb * size == 0)
		return (NULL);
	
	ptr = (void **) malloc (sizeof(void *) * nmemb);
	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (i < nmemb)
	{
		*(ptr + i) = (void *) malloc (size);
		if (*(ptr + i) == NULL)
		{
			free_arr(i, ptr);
			return (NULL);
		}
		i++;
	}
	return (ptr);
}

/*
int main(void)
{
	char	**cptr;
	int		i;
	int		j;

	cptr = (char **) ft_calloc (4, 10);
	if (cptr == NULL)
	{
		printf ("FAIL");
		return (1);
	}
	
	printf ("OK\n");
	i = 0;
	while (i < 4)
	{
		printf ("\nGO i = %d\n", i);
		j = 0;
		while (j < 10)
		{
			printf ("\nGO j = %d\n", j);
			*(*(cptr + i) + j) = 'a' + j + i;
			j++;
			}
		printf ("%s\n", *(cptr + i));
		i++;
	}
	free_arr(i, (void **) cptr);
	printf ("Free done");
    return (0);
}
*/
