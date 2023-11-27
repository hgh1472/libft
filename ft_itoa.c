/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwang <ghwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:22:19 by ghwang            #+#    #+#             */
/*   Updated: 2023/11/27 22:57:05 by ghwang           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t count(int n)
{
    size_t  cnt;

    cnt = 0;
    if (n == 0)
        return (1);
    if (n < 0)
        cnt++;
    while (n != 0)
    {
        cnt++;
        n /= 10;
    }
    return (cnt);
}
char *ft_itoa(int n)
{
    size_t  i;
    size_t  cnt;
    char    *number;

    i = 0;
    cnt = count(n);
    number = (char *)malloc(sizeof(char) * (cnt + 1));
    if (number == 0)
        return (NULL);
    if (n == 0)
        number[0] = '0';
    if (n < 0)
        number[0] = '-';
    while (n != 0)
    {
        if (n < 0)
            number[cnt - i - 1] = '0' - n % 10;
        else
            number[cnt - i - 1] = '0' + n % 10;
        n /= 10;
        i++;
    }
    number[cnt] = '\0';
    return number;
}