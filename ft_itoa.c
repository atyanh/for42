#include "libft.h"
#include <stdio.h>

char	*ft_itoa(int n)
{
	int	c;
	int	len;
	char	*res;

	c = n;
	len = 0;
	while (c > 0)
	{
		c /= 10;
		len++;
	}
	if (n < 0)
	{
		res = malloc((len + 2) * sizeof(char));
		res[0] = '-';
		n *= -1;
	}else
	{
		res = malloc((len + 1) * sizeof(char));
	}
	while (len)
	{
		res[len - 1] = (n % 10) + '0';
		printf("%c\n", res[len]);
		len--;
		n /= 10;
	}
	return (res);
}
