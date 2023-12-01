/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwang <ghwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:45:28 by ghwang            #+#    #+#             */
/*   Updated: 2023/12/01 15:35:29 by ghwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*substr;
	int		i;
	size_t	str_len;

	i = 0;
	str_len = ft_strlen(str);
	if (start >= ft_strlen(str))
		return (ft_strdup(""));
	else if (len + start > str_len)
		substr = (char *)malloc((str_len - start + 1) * sizeof(char));
	else
		substr = (char *)malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	while (str[start + i] && len-- > 0)
	{
		substr[i] = str[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
