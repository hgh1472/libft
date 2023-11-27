/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwang <ghwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:56:41 by ghwang            #+#    #+#             */
/*   Updated: 2023/11/27 23:00:55 by ghwang           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char    *newString;
    int     i;

    i = 0;
    newString = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
    if (newString == 0)
        return (0);
    while (*s1 != '\0')
        newString[i++] = *(s1++);
    while (*s2 != '\0')
        newString[i++] = *(s2++);
    newString[i] = '\0';
    return (newString);
}