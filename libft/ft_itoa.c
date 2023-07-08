/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokur <sokur@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 12:05:51 by sokur             #+#    #+#             */
/*   Updated: 2023/07/08 13:43:29 by sokur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_digits(int num)
{
	unsigned int	i;

	i = 0;
	if (num == 0)
		i = 1;
	if (num < 0)
	{
		i++;
		num = -num;
	}
	while (num > 0)
	{
		i++;
		num /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	unsigned int	digits;
	char			*str;

	digits = ft_digits(n);
	str = (char *)malloc((digits + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[digits] = '\0';
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		str[--digits] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
