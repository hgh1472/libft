/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwang <ghwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 15:33:37 by ghwang            #+#    #+#             */
/*   Updated: 2023/12/03 12:26:49 by ghwang           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	leng_dst;
	size_t	leng_src;

	leng_dst = ft_strlen(dst);
	leng_src = ft_strlen(src);
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
