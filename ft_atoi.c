/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwang <ghwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:35:14 by ghwang            #+#    #+#             */
/*   Updated: 2023/12/01 15:25:56 by ghwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_space(char c)
{
	if ((9 <= c && c <= 13) || c == ' ')
		return (1);
	return (0);
}

int	is_number(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	is_sign(char c)
{
	if (c == '+' || c == '-')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	num;
	int	sign;

	num = 0;
	sign = 1;
	while (is_space(*str))
		str++;
	if (is_sign(*str))
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (is_number(*str))
	{
		num *= 10;
		if (sign == -1)
			num -= *str - '0';
		else
			num += *str - '0';
		str++;
	}
	return (num);
}
