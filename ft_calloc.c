#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(nmemb * size);
	if (nmemb == 0 || size == 0 || !ptr)
		return (NULL);
	ft_bzero(ptr, nmemb);
	
	return (ptr);
}
