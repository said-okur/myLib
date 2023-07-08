/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokur <sokur@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 18:10:56 by sokur             #+#    #+#             */
/*   Updated: 2023/07/08 13:44:46 by sokur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The memset() function writes len bytes of value c
//(converted to an unsigned char) to the string b.
void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*dest;

	dest = b;
	i = 0;
	while (i < len)
	{
		dest[i] = c;
		i++;
	}
	return (b);
}
