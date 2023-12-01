/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwang <ghwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:55:18 by ghwang            #+#    #+#             */
/*   Updated: 2023/12/01 15:39:00 by ghwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	a;
	unsigned char	b;

	i = 0;
	while ((*(s1 + i) != '\0' || *(s2 + i) != '\0') && i < n)
	{
		a = (unsigned char)*(s1 + i);
		b = (unsigned char)*(s2 + i);
		if (a > b || b == '\0')
			return ((int)(a - b));
		else if (a < b || a == '\0')
			return ((int)(a - b));
		i++;
	}
	return (0);
}
