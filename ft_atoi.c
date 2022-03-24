/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatyan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 22:48:56 by hatyan            #+#    #+#             */
/*   Updated: 2022/03/23 22:36:18 by hatyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_white(char c)
{
	if (c == '\v' || c == '\f' || c == '\r')
		return (1);
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	res;

	res = 0;
	sign = 1;
	while (is_white(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	return (res * sign);
}
