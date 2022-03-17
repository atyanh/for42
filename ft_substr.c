#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	int	i;

	i = 0;
	ptr = (char *)malloc ((len + 1) * sizeof(char));
	if(!ptr)
		return (NULL);
	while (len-- && s[start])
	{
		ptr[i++] = s[start++];
	}
	
	ptr[i] = '\0';
	return (ptr);
}
