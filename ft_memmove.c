#include <stdio.h>

void    *ft_memmove(void *dst, const void *src, size_t n)
{
	int	i;
	i = 0;

	if(dst > src)
	{
		while(n--)
		{
			((char *)dst)[n] = ((char *)src)[n];	
		}
	}else
	{
		while (n--)
		{
			((char *) dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dst);
}
