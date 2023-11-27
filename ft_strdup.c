/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwang <ghwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:20:14 by ghwang            #+#    #+#             */
/*   Updated: 2023/11/27 21:43:00 by ghwang           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	int		i;
	char	*copy;

	i = 0;
	copy = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (copy == 0)
		return (0);
	while (*(src + i))
	{
		*(copy + i) = *(src + i);
		i++;
	}
	copy[i] = '\0';
	return (copy);
}