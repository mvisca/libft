/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvisca-g <mvisca-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 18:43:43 by mvisca-g          #+#    #+#             */
/*   Updated: 2023/05/09 18:43:59 by mvisca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	if (lst == NULL)
		return (NULL);
	tmp = lst;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
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
		printf ("LAST=%s\n", (char *)(ft_lstlast(head))->content);
        return (0);
}
*/
