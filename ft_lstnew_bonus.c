/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvisca-g <mvisca-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 19:47:40 by mvisca-g          #+#    #+#             */
/*   Updated: 2023/05/09 18:45:34 by mvisca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (void *) malloc (sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

/*
int	main(void)
{
	char	s1[] = "Hola";
	char	s2[] = "Mundo";
	t_list	*head;
	t_list	*tmp;

	
	head = ft_lstnew(s1);
	head->next = ft_lstnew(s2);
	tmp = head;
	while (tmp)
	{
		printf ("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}
	return (0);
}
*/