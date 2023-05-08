#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*curr_new;
	t_list	*new_list;

	if (!lst)
		return (NULL);
	new_list = ft_lstnew(f(lst->content));
	curr_new = new_list;
	while (lst->next)
	{
		lst = lst->next;
		curr_new->next = ft_lstnew(f(lst->content));
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
