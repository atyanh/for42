#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (fd < 0)
		return ;
	if(*s)
		ft_putchar_fd('\n', fd);
	while (*s)
	{
		ft_putchar_fd(*s, fd);
		s++;
	}
}
