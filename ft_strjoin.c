/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwang <ghwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:56:41 by ghwang            #+#    #+#             */
/*   Updated: 2023/12/01 15:56:57 by ghwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_string;
	int		i;
	size_t	len1;
	size_t	len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	i = 0;
	new_string = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (new_string == 0)
		return (0);
	while (*s1 != '\0')
		new_string[i++] = *(s1++);
	while (*s2 != '\0')
		new_string[i++] = *(s2++);
	new_string[i] = '\0';
	return (new_string);
}
