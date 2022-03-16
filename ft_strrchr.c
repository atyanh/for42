#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
	char *res;
	res = '\0';

	while(*s != '\0')
	{
		if(*s == c)
			res = ((char *)s);
		s++;
	}

	return (res);
}
