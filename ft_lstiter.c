#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list *begin;

	begin = lst;
	if(!lst || !f)
		return ;
	while (begin)
	{
		f(begin->content);
		begin = begin-> next;
	}
}
