#include "libft.h"

int	word_count(char	const *s, char c)
{
	int count;

	count = 0;
	while(*s)
	{
		while (*s == c)
			s++;
		while (*s && *s != c)
		{
			s++;
			if (*s == c || !*s)
				count++;
		}
	}
	return (count);
}

char	*fill_str(char const *s, int len)
{
	char	*str;
	int	i;

	i = 0;
	str = (char *)malloc((len + 1) * sizeof(char));
	while (len--)
	{
		str[i++] = *s;
		s++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int	words;
	int	len;
	int	i;

	i = 0;
	words = word_count(s,c);
	ptr = (char **)malloc((words + 1) * sizeof(char *));
	if(!ptr)
		return (NULL);
	while (words--)
	{
		len = 0;
		while (*s == c)
			s++;
		while (*s && *s != c)
		{
			s++;
			len++;
			if (*s == c || !*s)
				ptr[i++] = fill_str(s - len, len);
		}
	}
	ptr[i] = (NULL);
	return (ptr);
}
