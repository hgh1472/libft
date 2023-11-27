/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwang <ghwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:57:27 by ghwang            #+#    #+#             */
/*   Updated: 2023/11/26 21:45:16 by ghwang           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t  i;

    i = 0;
    while (i < n)
    {
        if (*(unsigned char *)(s + i) == (unsigned char)c)
        {
            return (void *)(s + i);
        }
        i++;
    }
    return 0;
}