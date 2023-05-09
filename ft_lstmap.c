/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvisca-g <mvisca-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 20:46:02 by mvisca-g          #+#    #+#             */
/*   Updated: 2023/05/09 20:52:41 by mvisca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*curr_new;
	t_list	*new_list;

	if (!lst)
		return (NULL);
	new_list = ft_lstnew(f(lst->content));
	if (!new_list)
	{
		del(new_list);
		return (NULL);
	}
	curr_new = new_list;
	while (lst->next)
	{
		lst = lst->next;
		curr_new->next = ft_lstnew(f(lst->content));
		if (!curr_new->next)
		{
			ft_lstclear(&curr_new, del);
			return (NULL);
		}
		if (!curr_new->next)
		{
			del(curr_new->next);
			free(curr_new);
		}
		else
			curr_new = curr_new->next;
	}
	return (new_list);
}
