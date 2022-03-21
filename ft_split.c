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

char	*fill_str(char const *s, char c)
{
	char	*str;
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s[i] != c || !s[i])
	{
		len++;
		i++;
	}
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (len--)		
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

void	freemem(char **ptr)
{
	int	i;

	i = 0;
	while (*ptr[i])
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int	words;
	int	i;

	i = 0;
	words = word_count(s,c);
	if(!(ptr = (char **)malloc((words + 1) * sizeof(char *))))
		return (NULL);
	while (words--)
	{
		while (*s == c)
			s++;
		ptr[i] = fill_str(s, c);
		if (ptr[i] == NULL)
		{
			freemem(ptr);
			return (NULL);
		}
		i++;
		while (*s && *s != c)
			s++;
	}	
	ptr[i] = (NULL);
	return (ptr);
}
