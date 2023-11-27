/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwang <ghwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 20:28:50 by ghwang            #+#    #+#             */
/*   Updated: 2023/11/26 21:48:11 by ghwang           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int c)
{
    if (c >= (int)'0' && c <= (int)'9')
        return (1);
    if (c >= (int)'A' && c <= (int)'Z')
        return (1);
    if (c >= (int)'a' && c <= (int)'z')
        return (1);
    return 0;
}