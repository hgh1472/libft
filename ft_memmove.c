/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwang <ghwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 15:07:12 by ghwang            #+#    #+#             */
/*   Updated: 2023/11/27 22:50:18 by ghwang           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, void *src, size_t len)
{
    int i;

    i = 0;
    if (dst > src)
    {
        i = (int)len - 1;
        while (i >= 0)
        {
            *(char *)(dst + i) = *(char *)(src + i);
            i--;
        }
        return (dst);
    }
    while (i < (int)len)
    {
        *(char *)(dst + i) = *(char *)(src + i);
        i++;
    }
    return dst;
}