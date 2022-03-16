#include "libft.h"

void	*ft_memchr(void	*arr, int c, size_t n)
{
	while(n--)
	{
		if(((unsigned char *) arr)[0] == (unsigned char)c)
			return (arr);
		arr++;
	}
	return (NULL);
}
