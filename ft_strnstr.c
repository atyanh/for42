/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatyan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 23:15:58 by hatyan            #+#    #+#             */
/*   Updated: 2022/03/23 22:45:13 by hatyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	char	*res;

	i = -1;
	if (needle[0] == '\0')
		return ((char *)haystack);
	if (len == 0 || !ft_strlen(haystack))
		return (0);
	if (len > ft_strlen(haystack))
		len = ft_strlen(haystack);
	while (++i < len - ft_strlen(needle) + 1)
	{
		if (needle[0] == haystack[i])
		{
			res = &((char *)haystack)[i];
			if (ft_strncmp(haystack + i, needle, ft_strlen(needle)) == 0)
				return (res);
		}
	}
	return (NULL);
}
