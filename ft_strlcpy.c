/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwang <ghwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 15:19:26 by ghwang            #+#    #+#             */
/*   Updated: 2023/11/27 23:01:09 by ghwang           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    int i;

    if (dstsize == 0)
        return (ft_strlen(src));
    i = 0;
    while (i < (int)dstsize - 1 && src[i] != '\0')
    {
        *(dst + i) = *(src + i);
        i++;
    }
    if (i == (int)dstsize - 1)
        dst[i] = '\0';
    i = ft_strlen(src);
    return (i);
}
/*
src = coucou
dest = c AAAAAAAA
=> dest = coucou
*/