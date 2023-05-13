/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvisca-g <mvisca-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 20:46:02 by mvisca-g          #+#    #+#             */
/*   Updated: 2023/05/12 15:20:33 by mvisca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
{
	t_list	*head;
	t_list	*curr;
	t_list	*prev;
	void	*cont;

	if (lst)
		return (NULL);

	
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*curr;

	if (!lst)
		return (NULL);
	head = ft_lstnew(f(lst->content));
	if (!head)
		return (NULL);
	curr = head;
	lst = lst->next;
	while (lst && lst->content) // ??
	{
		curr->next = ft_lstnew(f(lst->content));
		if (!curr->next)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		curr = curr->next;
		lst = lst->next;
	}
	return (head);
}

void	*f(void *cont)
{
	char	*str;

	str = (char *)cont;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str = *str - 32;
		str++;
	}
	return (str);

}

void	del(void *cont)
{
	free(cont);
}

int     main(void)
{
        char    s1[] = "Hola";
        char    s2[] = "Mundo";
        t_list  *head;
        t_list  *tmp;

        head = ft_lstnew(s1);
        head->next = ft_lstnew(s2);
        ft_lstadd_front(&head, ft_lstnew(ft_strdup("Primero")));
        ft_lstadd_back(&head, ft_lstnew(ft_strdup("Ultimo")));
        ft_lstadd_back(&head, ft_lstnew(ft_strdup("Borrable")));
        ft_lstadd_back(&head, ft_lstnew(ft_strdup("Otro")));
        tmp = head;
        while (tmp)
        {
        	printf ("%s\n", (char *)tmp->content);
            tmp = tmp->next;
        }
        printf ("SIZE=%d\n", ft_lstsize(head));
        printf ("LAST=%s\n", (char *)(ft_lstlast(head))->content);
   		head = ft_lstmap(head, f, del);
        printf ("LAST=%s\n", (char *)(ft_lstlast(head))->content);
        return (0);
}
*/
