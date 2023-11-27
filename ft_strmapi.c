/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwang <ghwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:37:43 by ghwang            #+#    #+#             */
/*   Updated: 2023/11/27 23:01:21 by ghwang           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t  length;
    size_t  i;
    char    *new;

    length = ft_strlen(s);
    i = 0;
    new = (char *)malloc(sizeof(char) * (length + 1));
    if (new == 0)
        return (0);
    while (i < length)
    {
        new[i] = f(i, s[i]);
        i++;
    }
    new[i] = '\0';
    return (new);
}