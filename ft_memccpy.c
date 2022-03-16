#include "libft.h"
void    *ft_memccpy(void *dst, const void *src, int c,size_t n)
{
	size_t i;
	i = 0;

	while(i < n)
	{
		((char*)dst)[i] = ((char*)src)[i];
		if(((char *)src)[i] == c)
			return '\0';
		i++;
	}
	return (dst);
}
