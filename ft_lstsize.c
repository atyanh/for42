#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list *begin;
	int	len;

	len = 0;
	begin = lst;
	while (begin)
	{
		len++;
		begin = begin-> next;
	}
	return (len);
}
