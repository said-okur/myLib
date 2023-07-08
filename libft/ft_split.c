/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokur <sokur@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 13:45:14 by sokur             #+#    #+#             */
/*   Updated: 2023/07/08 13:45:15 by sokur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"

static unsigned int	ft_words(const char *str, char delim)
{
	unsigned int	words;

	words = 0;
	while (*str)
	{
		if (*str == delim)
			str++;
		else
		{
			while (*str != delim && *str)
				str++;
			words++;
		}
	}
	return (words);
}

char	**ft_split(char const *str, char delim)
{
	char			**arr;
	unsigned int	i;
	unsigned int	j;

	if (!str)
		return (NULL);
	arr = (char **) ft_calloc(ft_words(str,delim) + 1, sizeof(char *));
	if (!arr)
		return (NULL);
	j = 0;
	while (*str)
	{
		if (*str == delim)
			str++;
		else
		{
			i = 0;
			while (*str != delim && *str && ++i)
				str++;
			arr[++j - 1] = (char *) ft_calloc(i + 1, sizeof(char));
			ft_strlcpy(arr[j - 1], str - i, i + 1);
		}
	}
	return (arr);
}
