/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwang <ghwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:29:40 by ghwang            #+#    #+#             */
/*   Updated: 2023/11/27 23:00:28 by ghwang           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    size_t  length;
    size_t  i;

    length = ft_strlen((const char *)s);
    i = 0;
    while (i < length)
    {
        f((unsigned int)i, s);
        i++;
        s++;
    }
}