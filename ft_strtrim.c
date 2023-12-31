/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwang <ghwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:04:05 by ghwang            #+#    #+#             */
/*   Updated: 2023/12/03 12:21:28 by ghwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	*new;

	i = 0;
	start = 0;
	end = ft_strlen(s1);
	while (is_set(s1[start], set) && s1[start])
		start++;
	while (end != (size_t)0 && is_set(s1[end - 1], set))
		end--;
	if (start == ft_strlen(s1))
		start = 0;
	new = (char *)malloc(sizeof(char) * (end - start + 1));
	if (new == 0)
		return (NULL);
	while (start < end)
		new[i++] = s1[start++];
	new[i] = '\0';
	return (new);
}
