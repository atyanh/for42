#include "libft.h"

int	ft_checkSym(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
		{
			return (1);
		}
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	start;
	size_t	end;
	size_t	i;

	if (*s1 == '\0')
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_checkSym(s1[start], set))
		start++;
	while (ft_checkSym(s1[end], set))
		end--;
	res = (char *)malloc((end - start + 1) * sizeof(char));
	if(!res || !s1)
		return (NULL);
	i = 0;
	while (start <= end)
		res[i++] = s1[start++];
	res[i] = '\0';
	return (res);
}	
