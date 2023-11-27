/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwang <ghwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:45:28 by ghwang            #+#    #+#             */
/*   Updated: 2023/11/26 21:46:27 by ghwang           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *subString;
    int     i;
    int     j;

    j = 0;
    i = 0;
    while (i < (int)len)
    {
        i++;
        if (s[start + i] == '\0')
            break;
    }
    if (start > ft_strlen((char *)s))
        i = 0;
    subString = (char *)malloc(sizeof(char) * (i + 1));
    if (subString == 0)
        return NULL;
    while (s[start + j] && j < i)
    {
        subString[j] = s[start + j];
        j++;
    }
    subString[j] = '\0';
    return (subString);
}