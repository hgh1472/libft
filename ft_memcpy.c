/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwang <ghwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:54:20 by ghwang            #+#    #+#             */
/*   Updated: 2023/11/27 22:49:40 by ghwang           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i;

    i = 0;
    if (dst == src)
        return (dst);
    while (i < n)
    {
        *(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
        i++;
    }
    return (dst);
}