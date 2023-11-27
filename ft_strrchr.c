/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwang <ghwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:51:02 by ghwang            #+#    #+#             */
/*   Updated: 2023/11/27 21:57:25 by ghwang           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    char    *t;

    t = NULL;
    while (*s != '\0')
    {
        if (*s == (char)c)
            t = (char *)s;
        s++;
    }
    if (*s == (char)c)
        t = (char *)s;
    return t;
}