#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void(*del)(void *))
{
	t_list	*newlist;
	t_list	*begin;
	t_list	*newnode;

	begin = lst;
	newlist = ft_lstnew(f(begin->content));
	begin = begin-> next;
	while (begin)
	{
		newnode = ft_lstnew(f(begin->content));
		if (!newnode)
		{
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		ft_lstadd_back(&newlist, newnode);
		begin = begin-> next;
	}
	return (newlist);
}
