#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;
	i = 0;

	while(n--)
	{
		if(s1[i] > s2[i])
			return (1);
		else if(s1[i] < s2[i])
			return (-1);
		i++;
	}
	return (0);
}
