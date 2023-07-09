/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokur <sokur@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 19:54:47 by sokur             #+#    #+#             */
/*   Updated: 2023/07/09 15:37:33 by sokur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*buffer1;
	unsigned char	*buffer2;
	size_t			counter;

	if (!dest && !src)
		return (NULL);
	buffer1 = (unsigned char *)dest;
	buffer2 = (unsigned char *)src;
	counter = 0;
	if (buffer1 > buffer2)
	{
		while (n-- > 0)
			buffer1[n] = buffer2[n];
	}
	else
	{
		while (n > counter)
		{
			buffer1[counter] = buffer2[counter];
			counter++;
		}
	}
	return (dest);
}
