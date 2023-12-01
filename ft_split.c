/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwang <ghwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:02:57 by ghwang            #+#    #+#             */
/*   Updated: 2023/12/01 15:45:23 by ghwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(const char *s, char c)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			cnt++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			while (s[i] == c)
				i++;
	}
	return (cnt);
}

int	c_spells(const char *s, char c)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (s[i])
	{
		if (s[i] != c)
			cnt++;
		else
			break ;
		i++;
	}
	return (cnt);
}

void	free_arr(char **arr, int first)
{
	int	i;

	i = 0;
	while (i < first)
		free(arr[i++]);
	free(arr);
}

char	**insert(char **ans, char const *s, char c)
{
	int	index1;
	int	index2;

	index1 = 0;
	index2 = 0;
	while (*s)
	{
		if (*s != c)
		{
			index2 = 0;
			ans[index1] = (char *)malloc(sizeof(char) * (c_spells(s, c) + 1));
			if (ans[index1] == 0)
			{
				free_arr(ans, index1);
				return (NULL);
			}
			while (*s != c && *s)
				ans[index1][index2++] = *(s++);
			ans[index1++][index2] = '\0';
		}
		else
			s++;
	}
	ans[index1] = 0;
	return (ans);
}

char	**ft_split(char const *s, char c)
{
	char	**ans;
	int		cnt;

	cnt = count_words(s, c);
	ans = (char **)malloc(sizeof(char *) * (cnt + 1));
	if (ans == 0)
		return (NULL);
	ans = insert(ans, s, c);
	if (ans == 0)
		return (NULL);
	return (ans);
}
