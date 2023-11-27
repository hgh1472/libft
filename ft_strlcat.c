/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwang <ghwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 15:33:37 by ghwang            #+#    #+#             */
/*   Updated: 2023/11/26 21:46:33 by ghwang           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	len_s(char *str)
{
	size_t	i;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t	i;
	size_t	leng_dst;
	size_t	leng_src;

	leng_dst = len_s(dst);
	leng_src = len_s(src);
	i = 0;
	if (dstsize <= leng_dst)
		return (dstsize + leng_src);
	while (src[i] != '\0' && i < dstsize - leng_dst - 1)
	{
		dst[leng_dst + i] = src[i];
		i++;
	}
	dst[leng_dst + i] = '\0';
	return (leng_dst + leng_src);
}