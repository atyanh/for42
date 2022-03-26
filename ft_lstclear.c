#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *begin;
	t_list *next;
	begin = *lst;
	
	while (begin)
	{
		next = begin-> next;
		ft_lstdelone(begin, del);
		begin = next;
	}
}
