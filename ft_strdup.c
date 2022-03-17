#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	len;
	int	i;

	len = ft_strlen(s);
	i = 0;
	ptr = malloc(len * sizeof(char));
	while(len--)
	{
		ptr[i] = s[i];
		i++;
	}
	return (ptr);
}
