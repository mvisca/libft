/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvisca-g <mvisca-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 20:35:50 by mvisca-g          #+#    #+#             */
/*   Updated: 2023/05/08 20:50:35 by mvisca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		ncount;
	t_list	*tmp;

	if (lst == NULL)
		return (0);
	tmp = lst;
	ncount = 1;
	while (tmp->next)
	{
		tmp = tmp->next;
		ncount++;
	}
	return (ncount);
}

/*
int     main(void)
{
        char    s1[] = "Hola";
        char    s2[] = "Mundo";
        t_list  *head;
        t_list  *tmp;

        head = ft_lstnew(s1);
        head->next = ft_lstnew(s2);
                ft_lstadd_front(&head, ft_lstnew(ft_strdup("Primero")));
                tmp = head;
        while (tmp)
        {
                printf ("%s\n", (char *)tmp->content);
                tmp = tmp->next;
        }
		printf ("SIZE=%d\n", ft_lstsize(head));
        return (0);
}
*/