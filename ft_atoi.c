/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwang <ghwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:35:14 by ghwang            #+#    #+#             */
/*   Updated: 2023/11/26 21:44:29 by ghwang           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int isSpaace(char c)
{
    if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r' || c == ' ')
        return 1;
    return 0;
}

int isNumber(char c) {
    if (c >= '0' && c <= '9')
        return 1;
    return 0;
}

int isSign(char c) {
    if (c == '+' || c == '-')
        return 1;
    return 0;
}
int ft_atoi(const char *str) 
{
    int num;
    int sign;

    num = 0;
    sign = 1;
    while (isSpaace(*str))
        str++;
    if (isSign(*str))
    {
        if (*str == '-')
            sign = -1;
        str++;
    }
    while (isNumber(*str))
    {
        num *= 10;
        if (sign == -1)
            num -= *str - '0';
        else
            num += *str - '0';
        str++;
    }
    return num;
}