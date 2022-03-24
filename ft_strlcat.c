/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatyan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 23:03:14 by hatyan            #+#    #+#             */
/*   Updated: 2022/03/23 22:16:53 by hatyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	int		j;
	size_t	res;
	int		nul;

	res = ft_strlen(src) + ft_strlen(dst);
	if (dstsize == 0)
		return (ft_strlen(src));
	i = 0;
	j = 0;
	while (dst[i] != '\0' && i < dstsize - 1)
		i++;
	while (src[j] != '\0' && i < dstsize - 1)
	{
		dst[i++] = src[j++];
		nul = 1;
	}
	if (nul == 1)
		dst[i] = '\0';
	if (dstsize < ft_strlen (dst))
		res = ft_strlen(src) + dstsize;
	return (res);
}
