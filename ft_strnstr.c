/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwang <ghwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:20:54 by ghwang            #+#    #+#             */
/*   Updated: 2023/11/27 22:51:24 by ghwang           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t  i;
    size_t  j;
    size_t  length;

    if (needle[0] == '\0')
        return ((char *)(haystack));
    i = 0;
    j = 0;
    length = ft_strlen((char *)needle);
    while (haystack[i] && i < len)
    {
        if (haystack[i] == needle[j]) {
            while (haystack[i + j] == needle[j] && haystack[i + j])
                j++;
            if (j == length)
                return ((char *)(haystack + i));
            j = 0;
        }
        i++;
    }
    return (NULL);
}