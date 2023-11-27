/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwang <ghwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 18:02:22 by ghwang            #+#    #+#             */
/*   Updated: 2023/11/26 21:48:42 by ghwang           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    while (n > 0)
    {
        if (*(unsigned char *)s1 != *(unsigned char *)s2)
            return ((int)(*(unsigned char *)s1 - *(unsigned char *)s2));
        s1++;
        s2++;
        n--;
    }
    return 0;
}